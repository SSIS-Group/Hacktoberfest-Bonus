def factorial(n):
	return n*factorial	(n-1) if n>=2 else 1

def main():
	print('Enter the number whose factorial is required:')
	n = int(input())
	print('The factorial of',n,'is',factorial(n))

if __name__ == '__main__':
	main()