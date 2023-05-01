#function
def check_even_odd(num):
	if(num % 2 == 0 ):
		print(num, "is Even ")
	else:
		print(num, "is odd ")

##
x=int(input("Enter the number: "))
check_even_odd(x)
