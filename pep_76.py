#!/usr/bin/env python3

def calculate():
    LIM = 100
    partition = []
    for i in range(LIM + 1):
        partition.append([None] * (LIM + 1))
        for j in reversed(range(LIM + 1)):
            if j == i:
                val = 1
            elif j > i:
                val = 0
            elif j == 0:
                val = partition[i][j + 1]
            else:
                val = partition[i][j + 1] + partition[i - j][j]
            partition[i][j] = val

    ans = partition[LIM][1] - 1
    return str(ans)

if __name__ == "__main__":
    print(calculate())

