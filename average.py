a=[]
count=0

for item in range(0,10):
	inp=int(input('Enter num: '))
	a.append(inp)
	count=count+1

res=sum(a)
print('Result = ',res)
Average=res/count
print("Average is : ",Average)



