# Name: Ashish Kumar Yadav
# Roll no.: 12112010
# Branch: I.T

# Write a Program to Check whether a triangle is Equilateral, Isosceles or
# Scalene.

a = int(input("Enter first side of the traingle: "))
b = int(input("Enter second side of the traingle: "))
c = int(input("Enter third side of the traingle: "))

if(a+b > c and b+c > a and c+a > b):
    if(a == b and b == c):
        print("Equilateral triangle will be formed")
    elif(a == b or b == c or c == a):
        print("Isosceles triangle will be formed")
    else:
        print("Scalene triangle will be formed")

else:
    print("Triangle formation is not possible with the entered values.")
