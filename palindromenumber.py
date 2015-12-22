
def isPalindrome(x):
    if x < 0:   return False
    if x == 0:   return True
    tmp = x
    reverse = 0
    while tmp != 0:
        reverse = 10*reverse + tmp%10
        tmp /= 10

    if reverse == x:
        return True
    else:
        return False

def isPalindrome2(x):
    if x < 0:   return False
    if x == 0:   return True
    base = 1
    while x/base >=10:
        base *= 10

    tmp = x
    while tmp != 0:
        leftDigit = tmp/base
        rightDigit = tmp%10
        if leftDigit != rightDigit: return False
        tmp -= base*leftDigit
        tmp /= 10
        base /= 100
    return True