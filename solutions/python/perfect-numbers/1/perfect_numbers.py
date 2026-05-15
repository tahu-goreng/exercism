def classify(number):
    """ A perfect number equals the sum of its positive divisors.

    :param number: int a positive integer
    :return: str the classification of the input integer
    """
    if number<=0:
        raise ValueError("Classification is only possible for positive integers.")
    value = 0
    for i in range(number-1):
        if number%(i+1)==0:
            value += i+1
    return "perfect" if value == number else "abundant" if value > number else "deficient"