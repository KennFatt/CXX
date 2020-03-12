#!/usr/bin/python3

import os
import sys
import time


def get_timestamp():
    return time.asctime(time.localtime(time.time()))


def get_kernel_release():
    return os.popen("uname -r").read().strip("\n")


def get_gcc_version():
    parse = os.popen("gcc --version").read()
    return parse.split("\n")[0]


def new_sample(sample_name):
    if os.path.isdir(sample_name):
        print(f"Sample with name {sample_name} exists!")
        return

    sample_path = os.path.realpath(sample_name)
    os.makedirs(os.path.join(sample_path, "out"), 0o777)
    print(f"New directory has been created at: {sample_path}")

    with open(os.path.join(sample_path, "main.cpp"), "w") as f:
        footer = {
            "Created on: ": get_timestamp(),
            "Compiler: ": get_gcc_version(),
            "OS: ": get_kernel_release(),
            "Flags: ": "-Wall -std=c++11 -g"
        }

        # Print the footer
        f.write("/**\n")
        for k in footer:
            f.write(f" * {k}{footer[k]}\n")
        f.write(" */\n")

        f.close()


if __name__ == "__main__":
    if len(sys.argv) == 1:
        print(f"Usage: {sys.argv[0]} <sample_name: str>")
        exit(1)

    sample_name = sys.argv[1].strip().lower()
    new_sample(sample_name)
