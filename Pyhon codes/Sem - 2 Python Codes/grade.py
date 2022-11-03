s1 = int(input("Enter the marks of subject 1:"))
s2 = int(input("Enter the marks of subject 2:"))
s3 = int(input("Enter the marks of subject 3:"))
s4 = int(input("Enter the marks of subject 4:"))
s5 = int(input("Enter the marks of subject 5:"))

avg = (s1+s2+s3+s4+s5)/5

if(avg>=80):
    grade = 'A'
elif(avg>=70):
    grade = 'B'
elif(avg>=50):
    grade = 'C'
elif(avg>=30):
    grade = 'D'
else:
    grade = 'E'

print("The grade of the student is:", grade)

