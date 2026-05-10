def convert(number):
    output = ""
    if not number%3:
        output += "Pling"
    if not number%5:
        output+= "Plang"
    if not number %7:
        output += "Plong"
    if output:
        return output
    return str(number)