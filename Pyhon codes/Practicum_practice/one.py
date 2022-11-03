class train:
    tickets = set()
    def __init__(self, name, fare, seats):
        for i in range (seats):
            self.tickets.add(i+1)
        self.name = name
        self.fare = fare
        self.seats = seats
    
    def getStatus(self):
        print("******************")
        print(f"The name of the train is {self.name}")
        print(f"The seats availale are {len(self.tickets)}")
        print("******************")
    
    def fareInfo(self):
        print(f"The price of the ticket is: Rs {self.fare}")

    def bookTicket(self):
        print("******************")
        if(len(self.tickets) > 0):
            for i in self.tickets:
                print(f"Your ticket booked successfully and your seat no. is {i}")
                self.tickets.remove(i)
                break
        else:
            print("Seats are full, better try in Tatkal.")

        print("******************")

    
    def cancelTicket(self, seat_no):
        self.tickets.add(seat_no)
        print("Your ticket has been cancelled successfully.")

intercity = train("Intercity Express: 14013", 90, 300)
intercity.getStatus()
intercity.fareInfo()
intercity.bookTicket()
intercity.getStatus()
intercity.cancelTicket(1)
intercity.getStatus()
