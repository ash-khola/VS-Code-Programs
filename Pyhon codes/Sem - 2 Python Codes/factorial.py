# Name: Ashish Kumar Yadav
# Roll no.: 12112010
# Branch: I.T

# Write a Program to find the factorial of a number.

num = int(input("Enter the number:"))
fact = 1
for i in range(1, num + 1, 1):
    fact = fact * i
print("The factorial of the number", num, "is:", fact)
