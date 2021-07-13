#!/usr/bin/env python3

def calculate():
    answer = sum(i * (i - (2 if i % 2 == 0 else 1)) for i in range(3, 1001))
    return str(answer)

if __name__ == "__main__":
    print(calculate())
