class Person:
    country = "India"

    def __init__(self):
        print("Initializing Person....")

    def takeBreath(self) :
        print("I am breathing")

class Employee(Person):
    company = "Honda"

    def __init__(self):
        super().__init__() # to rin the constructor of its parent class
        print("Initializng Employee")

    def getSalary(self):
        print(f"Salary is {self.salary}")

    def takeBreath (self):
        super().takeBreath()
        print("I am an employee so I am breathing....")

class Programmer(Employee):
    # company = "Fiverr"

    def __init__(self):
        super().__init__()
        print("Initializing Programmer....")

    def getSalary(self):
        print(f"No salary to programmer")

    def takeBreath(self):
        super().takeBreath()
        print("I am a programmer so i am breathing...")

# p = Person()
# p.takeBreath()

# e = Employee()
# e.takeBreath()

pr = Programmer()
# pr.takeBreath() 

