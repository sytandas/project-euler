#!/usr/bin/env python3

number = longest = 1
for n in range(3, 1000, 2):
    if n % 5 == 0:
        continue

    position = 1
    while (10 ** position) % n != 1:
        position += 1

    if position > longest:
        number, longest = n, position

print(number)
    
