def main():
	height = get_height()
	for i in range(height):
		print("#") 							# prints vertically

	for i in range(height):
		print("?",end = '')
	print()									# prints horizontally

	for i in range(height):
		for j in range(height):	
			print("$", end='')				# prints in 2D fashion
		print()	

	for i in range(height):
		print("&" *height)					# *height is like concatinating the &,height times
	

def get_height():
    while True:
        try:
            n = int(input("Height: "))
            if n>0:
                break
        except ValueError:
            print("not an integer")
    return n  

main()	