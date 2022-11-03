# Without using logical operators

a = int(input("Enter number 1:"))
b = int(input("Enter number 2:"))
c = int(input("Enter number 3:"))

if(a <= b):
    if(a <= c):
        small = a
    else:
        small = c
elif(b <= a):
    if(b <= c):
        small = b
    else:
        small = c
print("The smallest number among three is:", small)
