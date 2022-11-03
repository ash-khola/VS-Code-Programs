# Name: Ashish Kumar Yadav
# Roll no.: 12112010
# Branch: I.T

# Write a Program to find all the prime number between any two given
# numbers.

a = int(input("Enter the lower bound:"))
b = int(input("Enter the upper bound:"))
print("The prime numbers between", a, "and",b,"are:")
for i in range(a,  b+1, 1):
    flag = 1
    for j in range(2, i, 1):
        if(i % j == 0):
            flag = 0
            break
    if(flag == 1):
        print(i)
