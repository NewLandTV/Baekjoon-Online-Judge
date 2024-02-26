# Usage : Python Check.py [Directory Name(e.g. C, C++, C#, Python ...)] [File Extension(e.g. c, cpp, cs, py ...)] <1000> <1001> <1002> ... <???>
# Description : This file checks for missing files.

from sys import argv
from os import path

if __name__ != "__main__":
    exit()

argv.pop(0)

directoryName = argv.pop(0)
fileExtension = argv.pop(0)
noneList = []

for arg in argv:
    if not path.exists(path.join(directoryName, f"{arg}.{fileExtension}")):
        noneList.append(arg)

for none in noneList:
    print(none)