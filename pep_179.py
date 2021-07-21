#!/usr/bin/env python3

def calculate():
    divisors = [2] * (10**7 + 1) 
    for i in range(2, (len(divisors) + 1) // 2):
        for j in range(i * 2, len(divisors), i):
            divisors[j] += 1

    answer = sum((1 if divisors[i] == divisors[i + 1] else 0) for i in range(2, len(divisors) -1))
    return str(answer)

if __name__ == "__main__":
    print(calculate())
