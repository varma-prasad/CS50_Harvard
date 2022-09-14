s = input("Do you agree? ").lower()				# as str is object,it has a method to convert to lower case 

if s in ['y','yes']:
	print("agreed!")
elif s in ['n','no']:
	print("Not agreed!")
else:
	print("wrong input")