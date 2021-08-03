#!/usr/bin/env python3

def calculate():
    SIZE = 2000

    randseq = []
    for i in range(SIZE**2):
        k = i + 1
        if k <= 55:
            randseq.append((100003 - 200003*k + 300007*k*k*k) % 1000000 - 500000)
        else:
            randseq.append((randseq[-24] + randseq[-55]) % 1000000 - 500000)
    
    grid = [randseq[i * SIZE : (i +1) * SIZE] for i in range(SIZE)]


    def get_max_substring_sum(x, y, dx, dy):
        result = 0
        current = 0
        while 0 <= x < SIZE and 0 <= y < SIZE:
            current = max(current + grid[y][x], 0)
            result = max(current, result)
            x += dx
            y += dy
        return result

    answer = max(
            max(get_max_substring_sum(0, i, +1, 0),
                get_max_substring_sum(i, 0, 0, +1),
                get_max_substring_sum(0, i, +1, +1),
                get_max_substring_sum(i, 0, +1, +1),
                get_max_substring_sum(i, 0, -1, +1),
                get_max_substring_sum(SIZE - 1, i, -1, +1))
            for i in range(SIZE))
    return str(answer)

if __name__ == "__main__":
    print(calculate())


Answer:  52852124



