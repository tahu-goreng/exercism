def square(number):
    if number<=0 or number >64:
        raise ValueError("square must be between 1 and 64")

    grains = 1
    for i in range(number-1):
        grains *=2
    return grains


def total():
    amount = 0
    for i in range(64):
        amount+= square(i+1)
    return amount