#Write a program to input marks and calculate the grade of a student as per the SMVDU norms. 
marks= float(input("Enter the total marks")) 

if ( (marks > 90) and (marks<=100) ): 

    print("your grade is A+") 

elif ( (marks > 80) and (marks<=90) ): 

    print("your grade is A")     

elif ( (marks > 70) and (marks<=80) ): 

    print("your grade is B+")         

else: print("Grade less than B+")