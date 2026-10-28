import re
import sys
from pathlib import Path

source = Path("CMakeLists.txt").read_text(encoding="utf-8")
checks = {
    "target": re.findall(r"add_executable\s*\(\s*([^\s)]+)", source),
    "test": re.findall(r"add_test\s*\(\s*NAME\s+([^\s)]+)", source),
}
failed = False
for label, names in checks.items():
    seen = set()
    duplicates = sorted({name for name in names if name in seen or seen.add(name)})
    if duplicates:
        failed = True
        print(f"Duplicate {label} names: {', '.join(duplicates)}")
if failed:
    sys.exit(1)
print("CMake executable and test names are unique.")
