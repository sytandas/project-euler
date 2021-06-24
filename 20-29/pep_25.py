#!/usr/bin/env python3

term = 2
fib = [1, 1]

while len(str(fib[1])) < 1000:
    term += 1
    fib = [fib[1], fib[0] + fib[1]]

print(term)
