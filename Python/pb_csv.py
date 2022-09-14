import csv
name = input('Enter name: ')
number = int(input('enter number: '))
with open("pb.csv",'a') as file:

	write = csv.writer(file)
	write.writerow([name,number])
