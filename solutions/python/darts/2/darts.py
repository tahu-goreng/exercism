def score(x,y):
    r=(x*x+y*y)**(1/2)
    return 10 if r<=1 else (5 if r <=5 else (1 if r<=10 else 0)) 