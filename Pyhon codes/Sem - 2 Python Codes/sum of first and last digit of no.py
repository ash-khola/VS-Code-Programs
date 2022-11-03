def firstAndLast(num):
    copy=num
    s=num%10
    while(num>10):
        num=num//10
    s+=num
    print("The sum of the first and last digits of number",copy,"is:",s)

n = int(input("Enter the number:"))
firstAndLast(n)