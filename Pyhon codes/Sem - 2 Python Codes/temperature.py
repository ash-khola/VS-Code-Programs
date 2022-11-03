# Name: Ashish Kumar Yadav
# Roll no.: 12112010
# Branch: I.T

# Write a Program to read temperature and display a suitable message
# according to temperature state below:

temp = float(input("Enter the  temperature in degree celsius: "))
if(temp < 0):
    print("Freezing weather")
elif(temp < 10):
    print("Very cold Weather")
elif(temp < 20):
    print("Cold Weather")
elif(temp < 30):
    print("Normal temperature")
elif(temp < 40):
    print("Its hot")
else:
    print("Its very hot")

