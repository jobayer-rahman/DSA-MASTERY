def findNthNumber(a1, a2, n):
    return a1 + (n - 1) * (a2 - a1)

if __name__ == '__main__':
    a1 = int(input())
    a2 = int(input())
    n = int(input())
    print(findNthNumber(a1=a1, a2=a2, n=n))