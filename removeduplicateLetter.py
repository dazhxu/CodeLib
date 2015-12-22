
'''
def removeDuplicateLetters(s):
    letters = {}
    list = [0]*len(s)
    for i in range(len(s)):
        n = letters.get(s[i])
        if n == None:
            letters[s[i]] = i
            list[i] = 1
        else:
            j = n + 1
            while j < i and list[j] != 1:
                j += 1
            if s[j] < s[n]:
                list[n] = 0
                list[i] = 1
                letters[s[i]] = i
            else:
                list[n] = 2
    ret = ''
    for i in range(len(list)):
        if list[i] == 1:
            ret += s[i]
    return ret
'''

import collections
def removeDuplicateLetters(s):
    if not s: return ''
    last_pos = collections.defaultdict(int)
    dic = set(s)
    for i, c in enumerate(s):
        last_pos[c] = i

    last_pos = collections.OrderedDict(sorted(last_pos.items(), key=lambda x: x[1]))
    start, end = 0, last_pos.items()[0][1]
    ans = []
    for i in xrange(len(last_pos)):
        min_c = 'z'
        for k in xrange(start, end + 1):
            if min_c > s[k] and s[k] in last_pos:
                min_c = s[k]
                start = k + 1
        ans += [min_c]

        del last_pos[min_c]
        if not last_pos:  break
        end = last_pos.items()[0][1]
    return ''.join(ans)

s = 'cbacdcbc'
print removeDuplicateLetters(s)
