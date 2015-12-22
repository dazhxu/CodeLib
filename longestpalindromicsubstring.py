

def longestPalindrome(s):
    maxStr = ''
    maxLen = 0
    trasS = '#'
    for i in xrange(len(s)):
        trasS += s[i]
        trasS += '#'
    for i in xrange(len(trasS)):
        low = high = i
        while low >= 0 and high < len(trasS) and trasS[low] == trasS[high]:
            if (high - low + 1) > maxLen:
                maxLen = high - low + 1
                maxStr = trasS[low:(high+1)]
            low -= 1
            high += 1
    trasMaxStr = ''
    for item in maxStr:
        if item != '#':
            trasMaxStr += item
    return trasMaxStr


def longestPalindrome2(s):
    mx = 0
    id = 0
    tranS = '#'
    maxIdx = 0
    for i in xrange(len(s)):
        tranS += s[i]
        tranS += '#'
    pList = [1]*len(tranS)
    for i in xrange(1,len(tranS)):
        if mx > i:
            pList[i] = min(pList[2*id-i], pList[id]+id-i)
        else:
            pList[i] = 1

        while i+pList[i] < len(tranS) and i-pList[i] > -1 and tranS[i+pList[i]] == tranS[i-pList[i]]:
            pList[i] += 1

        if pList[i]+i > mx:
            mx = pList[i] + i
            id = i

        if pList[i] > pList[maxIdx]:
            maxIdx = i

    ret = ''
    for i in xrange(maxIdx-pList[maxIdx]+1, maxIdx+pList[maxIdx]):
        if tranS[i] != '#':
            ret += tranS[i]

    return ret



s = 'a'
maxStr = longestPalindrome2(s)
print maxStr