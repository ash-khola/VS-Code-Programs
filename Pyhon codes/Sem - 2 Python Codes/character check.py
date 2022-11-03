# Name: Ashish Kumar Yadav
# Roll no.: 12112010
# Branch: I.T

# Write a Program to enter a character and check whether it is in lowercase,
# Uppercase, digit or any other type.

char = input("Enter the character:")
# if(char >= "a" and char <= "z"):
#     print("It is in lowercase")
# elif(char >= "A" and char <= "Z"):
#     print("It is in uppercase")
# elif(char >= "0" and char <= "9"):
#     print("It is a digit")
# else:
#     print("It is of other type")

if(char.isdigit()):
    print("It is a digit.")
elif(char.isalpha()):
    print("It is an alphabet.")
else:
    print("It is a special character.")
