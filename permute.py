from sys import stdout

def perm(li, start, end):
    if start == end:
        for item in li:
            stdout.write(item)
        print ''
    else:
        for i in xrange(start, end):
            li[start], li[i] = li[i], li[start]
            perm(li, start+1, end)
            li[i],li[start] = li[start], li[i]

if __name__ == '__main__':
    li = ['a','b','c','d']
    perm(li,0, len(li))