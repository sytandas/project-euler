#!/usr/bin/env python3

def calculate():
    def sieve_reversibles(num):
        if num % 2 == 0:
            return 20 * 30**(num // 2 - 1)
        elif num % 4 == 3:
            return 100 * 500**((num - 3) // 4)
        elif num % 4 == 1:
            return 0
        else:
            raise AssertionError()
    answer = sum(sieve_reversibles(d) for d in range(2, 10))
    return str(answer)

if __name__ == "__main__":
    print(calculate())
