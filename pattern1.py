def pattern(num):
	for i in range(0,num):
		for j in range(0,i+1):
			print('* ',end=" ")

		print(" ")

##code

num=int(input("Enter the number: "))

pattern(num)
