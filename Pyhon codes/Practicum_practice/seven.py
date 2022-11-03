import random

num = random.randint(1,5)

cnt = 1

while 1:
    guess = int(input())
    if (guess < num):
        print("Please think a larger number")
        cnt+=1
    elif (guess > num):
        print("Please think a smaller number")
        cnt += 1
    else:
        break

print(f"{cnt} chance taken by the user")

with open ("hiscore.txt", "r") as f:
    hiscore = int(f.read())
    # f.close()

if(cnt < hiscore):
    print("You have just broken the hiscore")
    with open ("hiscore.txt", "w") as f:
        f.write(str(cnt))
        # f.close()
