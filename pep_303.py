#!/usr/bin/env python3 

def calculate():
    def find_minimum_multiple(n):
        feasible = [[1] + [0] * (n - 1)]
        i = 0

        while feasible[i][0] != 2:
            assert i == len(feasible) - 1
            prev = feasible[i]
            cur = list(prev)
            digitmod = pow(10, i, n)
            for j in range(n):
                if prev[j] > 0:
                    cur[(j + digitmod * 1) % n] = 2
                    cur[(j + digitmod * 2) % n] = 2
            feasible.append(cur)
            i += 1

        result = 0 
        remainder = 0
        for i in reversed(range(len(feasible) - 1)):
            digitmod = pow(10, i, n)

            for j in range((1 if (i == len(feasible) - 2) else 0), 3):
                newrem = (remainder - digitmod * j) % n
                if feasible[i][newrem] > 0:
                    result = result * 10 + j
                    remainder = newrem
                    break
            else:
                raise AssertionError()
        return result

    answer = sum(find_minimum_multiple(n) // n for n in range(1, 10001))
    return str(answer)


if __name__ == "__main__":
    print(calculate())


# Answer:  1111981904675169

