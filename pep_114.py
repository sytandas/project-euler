#!/usr/bin/env python3

def calculate():
    length = 50
    ways = [0] * (length + 1)
    for n in range(len(ways)):
        if n < 3:
            ways[n] = 1
        else:
            ways[n] = ways[n - 1] + sum(ways[ : n - 3]) + 1
    return str(ways[-1])

if __name__ == "__main__":
    print(calculate())

