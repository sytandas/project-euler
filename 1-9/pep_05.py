#if a number is divisible by 1 to 20

def divisible_test(num):
	for i in range(1, 21):
		if(num % i) != 0:
			return False
	return True


#starting from number 1, check if it's divisible by 1 to 20

num = 1
while True:
	if divisible_test(num):
		break
	num += 1

#if we've found the number, stop

print(num)

