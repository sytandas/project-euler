#!/usr/bin/env python3

def calculate():
    ans = 0
    n = 0
    d = 1
    for _ in range(1000):
        n, d = d, d * 2 + n
        if len(str(n + d)) > len(str(d)):
            ans += 1
    return str(ans)

if __name__ == "__main__":
    print(calculate())
