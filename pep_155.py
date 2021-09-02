#!/usr/bin/env python3

import fractions

def calculate():
	SIZE = 18
	possible = []
	all = set()  
	possible.append(set())
	possible.append({(60, 1)})
	all.update(possible[1])
	for i in range(2, SIZE + 1):
		poss = set()
		for j in range(1, i // 2 + 1):
			for (n0, d0) in possible[j]:
				for (n1, d1) in possible[i - j]:
					pseudosum = n0 * d1 + n1 * d0
					numerprod = n0 * n1
					denomprod = d0 * d1
					npgcd = fractions.gcd(pseudosum, numerprod)
					dpgcd = fractions.gcd(pseudosum, denomprod)
					poss.add((pseudosum // dpgcd, denomprod // dpgcd)) 
					poss.add((numerprod // npgcd, pseudosum // npgcd))  
		possible.append(poss)
		all.update(poss)
	return str(len(all))


if __name__ == "__main__":
	print(calculate())
