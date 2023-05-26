#program to find area of rectangle
# and perimeter

def perimeter(length, breadth):
	return 2*(length + breadth)

def area_rec(length,breadth):
	return length*breadth

length=int(input('Enter the length: '))
breadth=int(input('Enter the breadth: '))

area=area_rec(length,breadth)

peri=perimeter(length,breadth)

print('Area of rectangle: ',area)

print('Perimeter of rectangle: ',peri)


