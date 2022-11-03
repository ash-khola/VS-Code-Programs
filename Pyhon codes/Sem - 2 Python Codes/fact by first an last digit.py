
num = int(input("Enter the number:"))
a = 0
b = 0
first = 0
k = num
while(int(k/10) != 0):
    if(first == 0):
        a = k % 10
        first = 1
    k = int(k/10)

b = k
fact = 1
k = int(a+b+1)
for i in range(1, k, 1):
    fact = fact*i

print("Factorial of the sum of first and last digits of", num, "is:", fact)
