x = input("Enter the numbers separated by space - ")
num = list(map(int, x.split()))
l =[]
for i in num:  
    if i%3 != 0:
        l.append(i)
print("No.not divisible by 3 are - " ,*l, sep = " ")