

main = putStrLn (show answer)
answer = sum $ filter even $ takeWhile (<= 4000000) fibo


fibo = 1 : 2 : (zipWith (+) fibo (tail fibo))
