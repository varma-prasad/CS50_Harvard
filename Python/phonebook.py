people = {
		"varma":13546473,
		"venu":467844566
}
name = input("Enter the name: ")
if name in people:
	number = people[name]
	print(f"Number: {number}")
else:
	print("not found")
