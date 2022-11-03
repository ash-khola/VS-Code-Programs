# Name: Ashish Kumar Yadav
# Roll no.: 12112010
# Branch: I.T

# Write a Program to print Fibonacci series upto n terms.

n = int(input("Enter the value of n:"))
current = 0
next = 1
prev = 0
print("The Fibonacci series upto", n, "terms is:")
print(0)
print(1)
for i in range(1, n - 1, 1):
    current = next+prev
    print(current)
    prev = next
    next = current
