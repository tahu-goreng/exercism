def is_armstrong_number(number):
    string = str(number)
    armstrong = 0

    for s in string :
        armstrong += int(s)**len(string)

    return armstrong == number