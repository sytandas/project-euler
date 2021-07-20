#!/usr/bin/env python3

def calculate():
    numerator = 1
    denominator = 0
    for i in reversed(range(100)):
        numerator, denominator = convergents(i) * numerator + denominator, numerator
    answer = sum(int(c) for c in str(numerator))
    return str(answer)

def convergents(i):
    if i == 0:
        return 2
    elif i % 3 == 2:
        return i // 3 * 2 + 2
    else:
        return 1

if __name__ == "__main__":
    print(calculate())

