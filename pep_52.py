#!/usr/bin/env python3

import itertools

def calculate():
    condition = lambda i: all(sorted(str(i)) == sorted(str(j * i)) for j in range(2, 7))
    answer = next(i for i in itertools.count(1) if condition(i))
    return str(answer)

if __name__ == "__main__":
    print(calculate())
