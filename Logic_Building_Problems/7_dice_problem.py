def oppositeFaceOfDice(n):
    if n < 1 or n > 6:
        return "Wrong number!"
    return 7 - n

if __name__ == "__main__":
    givenNumber = int(input())
    print(oppositeFaceOfDice(n=givenNumber))