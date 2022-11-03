num = int(input())
temp=num
rev=0
s=0
while(num>0):
    rem=num%10
    s+=rem
    rev=(10*rev)+rem
    num = num//10
if(rev==temp):
    print("Sum =",s)

