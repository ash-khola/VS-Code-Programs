x = input("Enter the numbers separated by space - ")
a_list = list(map(int, x.split()))
maximum = max(a_list)
print("The maximum no. is - ", maximum)
minimum = min(a_list)
print("The minimum no. is - ", minimum)
