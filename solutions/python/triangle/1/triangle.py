def equilateral(sides):
    if not is_valid(sides):
        return False
    for i in range(3):
        if sides[i] != sides [(i+1)%3]:
            return False
    return True
    
def isosceles(sides):
    same_length = 0
    if not is_valid(sides):
        return False

    for i in range(3):
        if sides[i] == sides [(i+1)%3]:
            same_length+=2

    if same_length>=2:
        return True
    return False


def scalene(sides):
    same_length = 0
    if not is_valid(sides):
        return False

    for i in range(3):
        if sides[i] == sides [(i+1)%3]:
            same_length+=1
            
    if same_length==0:
        return True
    return False

def is_valid(sides):
    for i in range(3):
        if sides[i] == 0:
            return False
        two_side = sides[i] + sides[(i+1)%3]
        if two_side < sides[(i+2)%3]:
            return False
    return True