print("---PROGRAM FOR DETERMING THE TYPE OF TRIANGLE---")
print("----scalene, isosceles or equilateral------------")

# taking input from the user
print("enter the sides")
print("side 1:")
x= input()
print("side 2:")
y= input()
print("side 3:")
z= input()

# function to determine the type if triangle
def check_triangle(x, y, z):
  if (x==y):
    if (x==z):
        print("the triangle is equilateral")
    else:
        print("the triangle is isosceles")
  else:
    if(y==z):
        print("the triangle is isosceles")
    else:
        if(x==z):
            print("the triangle is isoscles")
        else:
           print("the triangle is scalene")



# calling the function
check_triangle(x,y,z)

