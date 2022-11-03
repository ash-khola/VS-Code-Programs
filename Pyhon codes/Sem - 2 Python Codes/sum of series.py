# Name: Ashish Kumar Yadav
# Roll no.: 12112010
# Branch: I.T

# Write a Program to find the sum of following series:
# 1-2+3-4+5-6+.......... N terms

n = int(input("Enter the value of n:"))
sum = 0
for i in range(1, n + 1, 1):
    if(i & 1):
        sum += i
    else:
        sum -= i
print("The sum of the series till",n,"terms is:",sum)
