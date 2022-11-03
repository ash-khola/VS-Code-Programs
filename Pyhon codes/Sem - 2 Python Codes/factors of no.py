# Name: Ashish Kumar Yadav
# Roll no.: 12112010
# Branch: I.T

# Write a Program to find the sum of all factors of a number. The number
# entered by the user should be in between 9 to 15. Otherwise print an error
# message.

num = int(input("Enter the number:"))
if(num < 9 or num > 15):
    print("The entered number is out of range.")
else:
    print("The factors of", num, "are:")
    for i in range(1, num + 1, 1):
        if(num % i == 0):
            print(i)
