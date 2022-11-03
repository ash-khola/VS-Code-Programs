num = int(input())
s = 0
for i in range(1,  num):
    if(num % i == 0):
        s += i
if(s == num):
    print("It is a perfect number")
else:
    print("It is not a perfect number")

# n = int(input("Enter any number: "))
# sum1 = 0
# for i in range(1, n):
#     if(n % i == 0):
#         sum1 = sum1 + i
# if (sum1 == n):
#     print("The number is a Perfect number!")
# else:
#     print("The number is not a Perfect number!")
