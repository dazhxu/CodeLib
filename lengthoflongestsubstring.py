
def lengthOfLongestSubstring(s):
    dic = {}
    next = [0]*len(s)
    first = [0]*(len(s)+1)
    print first
    maxLenth = 0
    for c in s:
        if c not in dic.keys():
            dic[c] = len(s)

    first[len(s)] = len(s)
    for i in reversed(range(len(s))):
        next[i] = dic.get(s[i])
        dic[s[i]] = i
        if next[i] < first[i+1]:
            first[i] = next[i]
        else:
            first[i] = first[i+1]
    for i in range(len(s)):
        if(first[i] - i) > maxLenth:
            maxLenth = first[i] - i

    return maxLenth

def lengthOfLongestSubstring2(s):
    dic = {}
    idx = -1
    maxLenth = 0
    for i in range(len(s)):
        n = dic.get(s[i])
        if n != None and n>idx:
            idx = n

        if i - idx > maxLenth:
            maxLenth = i - idx

        dic[s[i]] = i
    return maxLenth 

s = 'abba'

maxLenth = lengthOfLongestSubstring2(s)
print maxLenth
