#!/usr/bin/env python3

def calculate():
    limit = 10**6
    solutions = [0] * limit
    for i in range(1, limit * 2):
        for j in range(i // 5 + 1, (i + 1) // 2):
            temp = (i - j) * (j * 5 - i)
            if temp >= limit:
                break
            solutions[temp] += 1
    
    answer = solutions.count(10)
    return str(answer)

if __name__ == "__main__":
    print(calculate())

