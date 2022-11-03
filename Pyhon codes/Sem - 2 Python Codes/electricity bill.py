# Name: Ashish Kumar Yadav
# Roll no.: 12112010
# Branch: I.T


# Write a Program to calculate and print the Electricity bill of a given
# customer. The customer id., name and unit consumed by the user should
# be taken from the keyboard and display the total amount to pay to the
# customer.

id = int(input("Enter the customer id: "))
name = input("Enter the name of customer: ")
unit = float(input("Enter the units consumed: "))
if(unit <= 199):
    bill = 1.20 * unit
elif(unit < 400):
    bill = 1.50 * unit
elif(unit < 600):
    bill = 1.8 * unit
else:
    bill = 2 * unit

if(bill < 100):
    bill = 100
elif(bill > 400):
    bill += 200

print("The total amount to be paid by", name, "with id no.", id, "is:", bill)
