def is_leap(year):
    leap = False
    if year%4 == 0:
        leap = True 
        if year % 100 == 0: 
            leap = False 
            if year % 400 == 0: 
                leap = True 
    # Write your logic here
    
    return leap
