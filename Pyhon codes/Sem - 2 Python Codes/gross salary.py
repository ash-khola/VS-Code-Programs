basic = float(input("Enter basic salary of the employee:"))
if(basic <= 10000):
    basic = 2*basic
elif(basic <= 20000):
    basic = 2.15*basic
else:
    basic = 2.25*basic

print("The gross salary of employee is:", basic)
