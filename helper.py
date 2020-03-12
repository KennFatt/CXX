#!/usr/bin/python3

import os
import sys


def new_sample(sample_name):
    if os.path.isdir(sample_name):
        print(f"Sample with name {sample_name} exists!")
        return

    sample_path = os.path.realpath(sample_name)
    os.makedirs(os.path.join(sample_path, "out"), 0o777)
    print(f"New directory has been created at: {sample_path}")


if __name__ == "__main__":
    if len(sys.argv) == 1:
        print(f"Usage: {sys.argv[0]} <sample_name: str>")
        exit(1)

    sample_name = sys.argv[1].strip().lower()
    new_sample(sample_name)
