# Usage : Python Check.py <1000> <1001> <1002> ... <???>
# Description : This file checks for missing files.

from sys import argv
from os import path

argv.pop(0)

if __name__ != "__main__" or len(argv) == 0:
    exit()

directories = ["C", "C++", "Python", "Java", "아희", "FreeBASIC", "Ada", "Assembly", "Golfscript", "VisualBasic"]
fileExtensions = ["c", "cpp", "py", "java", "aheui", "bas", "adb", "asm", "gs", "vb"]

for directory, extension in zip(directories, fileExtensions):
    print(f"[{directory}]")
    print("----------")

    count = 0

    for arg in argv:
        fileName = f"{arg}.{extension}"

        if not path.exists(path.join(directory, fileName)):
            count += 1

            print(fileName)

    print(f"Total : {count}")
