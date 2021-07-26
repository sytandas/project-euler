#!/usr/bin/env python3

def calculate():
    LENGTH = 50
    return str(sum(ways_c(LENGTH, i) for i in range(2, 5)))

def ways_c(length, m):
    sieve = [1] + [0] * length
    for n in range(1, len(sieve)):
        sieve[n] += sieve[n - 1]
        if n >= m:
            sieve[n] += sieve[n - m]
    return sieve[-1] - 1

if __name__ == "__main__":
    print(calculate())

# Answer:  20492570929

