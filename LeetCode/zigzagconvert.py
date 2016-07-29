def convert(s,numRows):
    strList = ['']*numRows  #store every line in ZigZag
    if numRows == 1:
        return s
    sIndex = 0
    gap = numRows - 2
    while sIndex < len(s):
        rowIndex = 0
        while sIndex < len(s) and rowIndex < numRows:
            strList[rowIndex] += s[sIndex]
            sIndex += 1
            rowIndex += 1
        rowIndex = gap
        while sIndex < len(s) and rowIndex > 0:
            strList[rowIndex] += s[sIndex]
            sIndex += 1
            rowIndex -= 1
    str = ''
    for strItem in strList:
        str += strItem
    return  str

def convert2(s, numRows):
    sLen = len(s)
    if sLen == 0 or numRows < 2:
        return s
    str = ''
    lag = 2*numRows - 2
    for rowIndex in xrange(numRows):
        j = rowIndex
        while j < sLen:
            str += s[j]
            if rowIndex > 0 and rowIndex < (numRows-1):
                t = j + lag - 2*rowIndex
                if t < sLen:
                    str += s[t]
            j += lag
    return str

s = 'PAYPALISHIRING'
str = convert2(s,3)
print s
print str