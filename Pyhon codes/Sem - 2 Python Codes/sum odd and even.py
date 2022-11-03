# Name: Ashish Kumar Yadav
# Roll no.: 12112010
# Branch: I.T

# Write a Program to find the sum of all even and odd number separately from
# any n given numbers.

n = int(input("Enter the value of n:"))
even = 0
odd = 0
print("Enter", n, "numbers:")
for i in range(1,n+1):
    print("Enter the number",i,":")
    val = int(input())
    if(val % 2 == 0):
        even += val
    else:
        odd += val[dfn]

print("Even sum:", even)
print("Odd sum:", odd)
