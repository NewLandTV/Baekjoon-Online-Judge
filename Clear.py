from glob import glob
from os import remove

directories = ["C", "C++"]
targetFiles = ["*.exe", "*.out"]

def RemoveFileAll(path):
    files = glob(path)

    for file in files:
        print(f"Delete : {file}")
        remove(file)

for directory in directories:
    for target in targetFiles:
        RemoveFileAll(f"./{directory}/{target}")