string = str(input("enter the sentence- "))
total_digits = 0
total_letters = 0

for s in string :
    if s.isnumeric():
        total_digits += 1

    else :
        total_letters += 1

print ('Total digits found :- ',total_digits)
print ('Toal letters found :- ',total_letters)
