pw=input("Enter the password:")
if(len(pw)<6 or len(pw)>16):
    print("Invalid Password")
else:
    flag=0
    flag1=0
    flag2=0
    flag3=0
    for i in range(0,len(pw)):
        if(pw[i]>='a' and pw[i]<='z'):
            flag=1
        elif(pw[i]>='A' and pw[i]<='Z'):
            flag1=1
        elif(pw[i]>='0' and pw[i]<='9'):
            flag2=1
        elif(pw[i]=='$'or pw[i]=='@' or pw[i]=='#'):
            flag3=1

    total=flag+flag1+flag2+flag3
    if(total==4):
        print("Valid password")
    else:
        print("Invalid password")
