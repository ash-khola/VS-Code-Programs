# import math
# n = int(input("Enter the value of n:"))
# s = 0
# for i in range(1, n+1):
#     if(i & 1):
#         s += math.pow(i, i)
#     else:
#         s -= math.pow(i, i)

# print("The sum of the series is:",s)

# Name: Ashish Kumar Yadav
# Roll no.: 12112010
# Branch: I.T

# Write a Program to find the sum of following series:
# 9+99+999+9999+99999+.......... N terms

n = int(input("Enter the number of terms:"))
ans=((10*(pow(10,n)-1))/9-n)
print("The sum of the series till",n,"terms is:",ans)