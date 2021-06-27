#!/usr/bin/env python3

import itertools

def compute():
    a = list(range(10))
    temp = itertools.islice(itertools.permutations(a), 999999, None)
    return "".join(str(x) for x in next(temp))

if __name__ == "__main__":
    print(compute())

