#!/usr/bin/env python3

def calculate():
    
    nine_pyramidal = [1]
    pyramidal_die = [0, 1, 1, 1, 1]
    for i in range(9):
        nine_pyramidal = convolve(nine_pyramidal, pyramidal_die)

    six_cubic = [1]
    cubic_die = [0, 1, 1, 1, 1, 1, 1]
    for i in range(6):
        six_cubic = convolve(six_cubic, cubic_die)

    answer = 0
    for i in range(len(nine_pyramidal)):
        answer += nine_pyramidal[i] * sum(six_cubic[ : i])
    answer = float(answer) / (sum(nine_pyramidal) * sum(six_cubic))
    return f"{answer:.7f}"

def convolve(a, b):
    c = [0] * (len(a) + len(b) - 1)
    for i in range(len(a)):
        for j in range(len(b)):
            c[i + j] += a[i] * b[j]
    return c


if __name__ == "__main__":
    print(calculate())

# Answer:  0.5731441

