# Usage : Python Check.py <1000> <1001> <1002> ... <???>
# Description : This file checks for missing files.

from sys import argv
from os import path

argv.pop(0)

if __name__ != "__main__" or len(argv) == 0:
    exit()

directories = ["C", "C++", "Python", "아희"]
fileExtensions = ["c", "cpp", "py", "aheui"]

for directory, extension in zip(directories, fileExtensions):
    print(f"[{directory}]")
    print("----------")

    for arg in argv:
        fileName = f"{arg}.{extension}"
        
        if not path.exists(path.join(directory, fileName)):
            print(fileName)

    print()