#!/usr/bin/env python3

def calculate():
    LENGTH = 50
    ways_c = [1] + [0] * LENGTH 
    for n in range(1, len(ways_c)):
        ways_c[n] += sum(ways_c[max(n - 4, 0) : n])
    return str(ways_c[-1])

if __name__ == "__main__":
    print(calculate())


#Answer:  100808458960497

