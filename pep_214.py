#!/usr/bin/env python3

import array

def calculate():
    LIMIT = 40000000
    totient = listOfTotient(LIMIT - 1)
    totient_len = array.array("L", [0, 1])
    answer = 0
    for i in range(len(totient_len), len(totient)):
        chain_len = totient_len[totient[i]] + 1
        totient_len.append(chain_len)
        if chain_len == 25 and totient[i] == i - 1:
            answer += i
    return str(answer)

def listOfTotient(n):
    assert n < (1 << 32)
    result = array.array("L", range(n + 1))
    for i in range(2, n + 1):
        if result[i] == i:
            for j in range(i, n + 1, i):
                result[j] = result[j] // i * (i - 1)
    return result


if __name__ == "__main__":
    print(calculate())

# Answer:  1677366278943


