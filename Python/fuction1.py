#radius=float(input("enter the radius\n"))
#area=3.142*radius*radius
#print(f"the area of the circle is\t{area}")

#rewrite using fuction
def area(r):
    return 3.142*r*r
radius=float(input("enter the radius\n"))

#call/invoke the fuction
print(f"the area is\t{area(radius)}")