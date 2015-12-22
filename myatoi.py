def myAtoi(str): #impelement state machine
    """
    :type str: str
    :rtype: int
    """
    x = 0
    flag = 1
    state = 1
    for c in str:
        if state == 3:
            if c.isdigit():
                x = 10*x + int(c)
            else:
                state = 0
        elif state == 1:
            if c == ' ' or c == '\t':
                continue
            elif c == '+':
                flag = 1
                state = 2
            elif c == '-':
                flag = -1
                state = 2
            elif c.isdigit():
                x = 10*x + int(c)
                state = 3
            else:
                state = -1
        elif state == 2:
            if c.isdigit():
                x = 10*x + int(c)
                state = 3
            else:
                state = -1
        elif state == -1:
            return 0
        else:
            state = 0

    if x >= 2147483648:
        if flag == -1:
            return flag*2147483648
        else:
            return flag*2147483647
    else:
        return flag*x

s = '      -0 2222'
print myAtoi(s)