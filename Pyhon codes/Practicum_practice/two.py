class Person:
    country = "India"

    def takeBreath(self) :
        print("I am breathing")

class Employee(Person):
    company = "Honda"

    def getSalary(self):
        print(f"Salary is {self.salary}")

    # def takeBreath (self):
    #     print("I am an employee so I am breathing....")

class Programmer(Employee):
    # company = "Fiverr"

    def getSalary(self):
        print(f"No salary to pprogrammer")

    # def takeBreath

p = Person()
p.takeBreath()
e = Employee()
e.takeBreath()
pr = Programmer()
pr.takeBreath() 
print(pr.company)
print(pr.country)
# pr.country