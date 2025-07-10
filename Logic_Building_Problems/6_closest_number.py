def closestNummber(n, m):
    closest = 0
    min_diff = float('inf')
    
    for i in range(n-abs(m), n+abs(m)+1):
        if i % m == 0:
            difference = abs(n-i)
            if difference < min_diff or (difference == min_diff and abs(i) > abs(closest)):
                closest = i
                min_diff = difference
    return closest

def closestNumberEff(n, m):
    q = int(n/m)
    
    # 1st closest number
    n1 = m*q
    
    # 2nd closest number
    if ((n*m) > 0):
        n2 = m*(q+1)
    else:
        n2 = m*(q-1)
    
    if (abs(n-n1) < abs(n-n2)):
        return n1
    
    return n2

if __name__ == '__main__':
    n = 7 #int(input()) # 13
    m = 5 #int(input()) # 4
    print(closestNumberEff(n, m))