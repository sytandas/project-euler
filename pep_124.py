#!/usr/bin/env python3

def calculate():
    L = 100000

    rads = [0] + [1] * L
    for i in range(2, len(rads)):
        if rads[i] == 1:
            for j in range(i, len(rads), i):
                rads[j] *= i
    data = sorted((rad, i) for(i, rad) in enumerate(rads))
    return str(data[10000][1])


if __name__ == "__main__":
    print(calculate())
                
