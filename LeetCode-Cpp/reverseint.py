def reverse(x):
    xCopy = x
    flag = 1
    if x < 0:
        flag = -1
    xCopy *= flag
    ret = ''
    s = xCopy/10
    ret += str(xCopy%10)
    while s > 0:
        ret += str(s%10)
        s /= 10
    if float(ret) > 2147483647:
        return 0
    retX = flag * int(ret)
    return retX

def reverse2(x):
    res = 0
    flag = 1
    if x < 0:
        flag = -1
    x *= flag
    while x != 0:
        res = res*10 + x%10
        x /= 10
    if res > 2147483647:
        res = 0
    return res*flag

x = -123
ret = reverse2(x)
print ret
