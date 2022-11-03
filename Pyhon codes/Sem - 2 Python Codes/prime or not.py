# Name: Ashish Kumar Yadav
# Roll no.: 12112010
# Branch: I.T

# Write a Program to count number of digits in a number if it is a prime number
# using while loop.

num = int(input("Enter the number:"))
i = 2
flag=1
while(i < num/2):
    if(num % i == 0):
        flag = 0
        break
    else:
        i+=1
if(flag==1):
    count=0
    while(num>0):
        num=num//10
        count+=1
    print("The number is a prime number and the count of the digits is:",count)
else:
    print("The number is not a prime number.")
