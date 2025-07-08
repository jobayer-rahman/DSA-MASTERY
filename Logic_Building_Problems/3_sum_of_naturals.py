def getSumWithLoop(number):
    sum = 0
    for i in range(number+1):
        sum += i
    return sum

def getSumWithFormula(number):
    """
        This method is more efficient because it doesn't have any loop.
    """
    return (number * (number + 1)) // 2

if __name__ == '__main__':
    input_number = int(input())
    # print(getSumWithLoop(number=input_number))
    print(getSumWithFormula(number=input_number))