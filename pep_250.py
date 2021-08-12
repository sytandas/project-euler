#!/usr/bin/env python3

def calculate():

    I = 10**16
    subsets = [0] * 250
    subsets[0] = 1

    for i in range(1, 250250 +1):
        offset = pow(i, i, 250)
        subsets = [(val + subsets[(j - offset) % 250]) % I
                for (j, val) in enumerate(subsets)]

    answer = (subsets[0] - 1) % I
    return str(answer)

if __name__ == "__main__":
    print(calculate())

# Answer:  1425480602091519
