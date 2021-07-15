#!/usr/bin/env python3

def calculate():
    size_limit = 1000000
    type_limit = 10

    type = [0] * (size_limit + 1)
    for n in range(3, size_limit // 4 + 2):
        for m in range(n - 2, 0, -2):
            tiles = n * n - m * m
            if tiles > size_limit:
                break
            type[tiles] += 1

    answer = sum(1 for t in type if 1 <= t <= type_limit)
    return str(answer)

if __name__ == "__main__":
    print(calculate())

