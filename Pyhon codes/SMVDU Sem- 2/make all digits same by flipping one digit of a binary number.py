from math import log 
 
def works(val, f=lambda x:x): 
    bin_int = int(val, 2) 
    if bin_int == 0: return True 
    return log(f(bin_int), 2).is_integer() 
 
user_input = input("Enter binary string\n") 
 
try: 
    print(["NO", "YES"][int(works(user_input) or works(user_input, lambda a: (lambda b: b & ((1<<len(user_input))-1) if b < 0 else b)(~a)))]) 
except ValueError as e: 
    print(f"{user_input} is not a string of ones and zeroes.") 