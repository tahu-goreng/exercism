def is_armstrong_number(number):
    armstrong = 0
    temp = number
    digits = Digits(number)
    while temp>0:
        armstrong += (temp%10)**digits
        temp=int(temp/10)
    return armstrong==number
    

def Digits(number):
    count = 0
    while number>0:
        number = int(number/10)
        count +=1
    return count