# Name: Ashish Kumar Yadav
# Roll no.: 12112010
# Branch: I.T

# Write a Program to find the factorial of a number if it is a palindrome number
# using while loop.

num = int(input("Enter the number:"))
temp = num
rev = 0
while(num > 0):
    rem = num % 10
    rev = (10*rev)+rem
    num = num//10
if(temp == rev):
    fact = 1
    i=1
    while(i<=temp):
        fact *= i
        i+=1
    print("The number is a palindrome and its factorial is:",fact)
else:
    print("The number is not a palindrome number.")
