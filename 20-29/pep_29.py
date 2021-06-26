#!/usr/bin/env python3

list = []

for i in range(2, 101):
    for j in range(2, 101):
        result = i ** j 
        if result not in list:
            list.append(result)
print(len(list))
