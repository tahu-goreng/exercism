import math

def score(x, y):
    # if x<=0 or y<=0:
    #     raise ValueError("Invalid input")
    r = math.sqrt(x*x+y*y)
    if r<=1:
        return 10
    if r<=5:
        return 5
    if r<=10:
        return 1
    return 0