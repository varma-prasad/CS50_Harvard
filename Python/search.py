import sys
numbers = [4,6,8,2,7,3]

if 0 in numbers:
	print("Found")
	sys.exit(0)

print("not Found")
sys.exit(1)

# codes written below are not executed as sys.exit comes out of programme

names = ['varma','venu','savi','bhagya','vishwa','shiva']

if 'uma' in names:
	print("Found")
	sys.exit(0)

print("not Found")
sys.exit(1)