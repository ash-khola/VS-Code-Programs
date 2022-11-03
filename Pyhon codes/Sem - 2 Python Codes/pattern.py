# n = int(input("Enter the no. of rows:"))
# for i in range(n):
#     for j in range(i+1):
#         print("* ", end="")
#     print()

# for i in range(n):
#     for j in range(i+1):
#         if((i+j) & 1):
#             print("0 ",end="")
#         else:
#             print("1 ",end="")
#     print()

# for i in range(1,n+1):
#     print("* "*i)


# Name: Ashish Kumar Yadav
# Roll no.: 12112010
# Branch: I.T

# Write a Program to print the following pattern.
#         *
#       * *
#     * * *
#   * * * *
# * * * * *

# for i in range(1, 6):
#     for j in range(1, 6-i):
#         print("  ", end="")
#     for k in range(6-i, 6):
#         print("* ", end="")
#     print()

# Name: Ashish Kumar Yadav
# Roll no.: 12112010
# Branch: I.T

# Write a Program to print the following pattern.
# 8 8 8 8 8 8 8
# 7 7 7 7 7 7 7
# 6 6 6 6 6 6 6
# 5 5 5 5 5 5 5

# for i in range(8, 4, -1):
#     for j in range(1, 8, 1):
#         print(i," ", end="")
#     print()

# Name: Ashish Kumar Yadav
# Roll no.: 12112010
# Branch: I.T

# Write a Program to print the following pattern.

# 1 2 3 4 5 6 7 8 9
# 2 3 4 5 6 7 8 9 1
# 3 4 5 6 7 8 9 1 2
# 4 5 6 7 8 9 1 2 3
# 5 6 7 8 9 1 2 3 4
# 6 7 8 9 1 2 3 4 5
# 7 8 9 1 2 3 4 5 6
# 8 9 1 2 3 4 5 6 7
# 9 1 2 3 4 5 6 7 8

for i in range(1, 10, 1):
    j = i
    for k in range(1, 10, 1):
        if(j == 10):
            print(1," ", end="")
            j+=2
        else:
            print(j % 10," ", end="")
            j = j+1
    print()




