def getSumOfSquares(number):
    return sum([n**2 for n in range(1, number+1)])

def getSumOfSquaresWithFormula(number):
    return (number * (number + 1) * (2 * number + 1)) // 6

if __name__ == '__main__':
    input_number = int(input())
    # print(getSumOfSquares(number=input_number))
    print(getSumOfSquaresWithFormula(number=input_number))