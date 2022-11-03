n=int(input("Enter the number of terms:"))
sum=0
# def fact(n):  
#     return 1 if (n==1 or n==0) else n * fact(n - 1);  
for i in range(1,n+1):
    f=1
    for j in range(1,i+1):
        f*=j;
    sum+=f;
        
print("The factorial of the series is:",sum)  
