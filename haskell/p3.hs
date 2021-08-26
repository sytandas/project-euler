main = putStrLn (show answer)
answer = largestPrimeFactor (600851475143 :: Integer)

largestPrimeFactor n =
	let
		p = smallestPrimeFactor n
	in
		if p == n then p
		else largestPrimeFactor (div n p)

smallestPrimeFactor n = head [k | k <- [2..n], mod n k == 0]

