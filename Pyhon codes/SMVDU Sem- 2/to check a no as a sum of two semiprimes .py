MAX = 200
arr = []
sprime = [False] * (MAX)

def computeSP():
    for i in range(2,MAX):
        cnt,num,j = 0,i,2
        while (cnt<2 and j*j <= num):
            while(num % j == 0):
                num = int(num/j)
                cnt = cnt + 1
            j = j+1

        if(num > 1):
            cnt = cnt + 1

        if(cnt == 2):
            sprime[i] = True
            arr.append(i)

def checkSP(n):
    i = 0
    while(arr[i] <= n/2):
        if(sprime[n - arr[i]]):
            return True
        i = i+1
    return False

computeSP()

n = int(input("Enter the number - "))

if(checkSP(n)):  
    print('Yes',end='')  
else:
    print('No',end='')  