def check_even_or_odd_with_remainder(number):
    if number % 2 == 0:
        return True
    else:
        return False
    
def check_even_or_odd_with_bitwise(number):
    """
        This method is more efficient because it does not do any operation,
        just check the bit of a number. For the even number the bit is always
        0 and for the odd number the bit is 1. That's it.
    """
    if number & 1 == 0:
        return True
    else:
        return False
        

if __name__ == '__main__':
    number = int(input())
    if check_even_or_odd_with_bitwise(number=number):
        print("true")
    else:
        print("false")