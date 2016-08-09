def insertSort(list_):
    for i in xrange(1, len(list_)):  #i is iterator from start to end of list_
        j = i
        while j > 0 and list_[j] < list_[j - 1]:
            list_[j], list_[j-1] = list_[j-1], list_[j]
            j -= 1
    #return list_

def bubbleSort(list_):
    for i in xrange(0, len(list_)-1): #i is iterator from start to end of list_
        for j in reversed(range(i+1, len(list_))): # j is iterator from
            if list_[j] < list_[j-1]: #if an item is smaller than the one just before it
                list_[j], list_[j-1] = list_[j-1], list_[j] #swap the two items
    #return list_

'''
start of mergesort
'''
def merge(list_, p, r, q): #merge the two part of list.front part is from p to r; back part is from r+1 to q
    lList = list_[p:r+1] #copy the front part to lList
    rList = list_[r+1:q+1] #copu the back part to rList
    k = p #the index of list_
    i = 0 #the index of lList
    j = 0 #the index of rList
    while i < len(lList) and j < len(rList): #merge the two list, continue comparing the starts of two list until
                                                #one list is over
        if lList[i] < rList[j]:
            list_[p] = lList[i]
            p += 1
            i += 1
        else:
            list_[p] = rList[j]
            p += 1
            j += 1
    for l in xrange(i, len(lList)): #if lList is not over, copy the remaining items to list_
        list_[p] = lList[l]
        p += 1
    for l in xrange(j, len(rList)): #if rList is not over, copy the remaining items to list_
        list_[p] = rList[l]
        p += 1

def mergeSortPre(list_, p, q): #mergesort the list_ from p to q using recursion
    if p < q:
        r = (p + q) / 2 #devide list_ into two parts
        mergeSortPre(list_, p, r) #mergesort front part
        mergeSortPre(list_, r+1, q) #mergesort back part
        merge(list_, p, r, q) #merge the two part

def mergeSort(list_):
    mergeSortPre(list_, 0, len(list_)-1) #mergesort list_ form 0 to end
'''
end of mergeSort
'''

'''
start of quickSort
'''
def partition(list_, p, q): #divede the list into two parts by list_[q];items in front is smaller than list_[q]
                                #items in back is not smaller than list_[q]
    x = list_[q]
    i = p - 1 #index of the boundary of items smaller than x
    for j in xrange(p, q): #iterator from p to q-1
        if list_[j] < x: #if item is smaller than x, put it in boundary, i
            i += 1
            list_[i], list_[j] = list_[j], list_[i]
    list_[i+1], list_[q] = list_[q], list_[i+1] #exchange a[q] and item following the boundary i
    return i+1

def quickSortPre(list_, p, q):
    if p < q:
        r = partition(list_, p, q) #divide list into to two parts
        quickSortPre(list_, p, r-1) #quicksort front part
        quickSortPre(list_, r+1, q) #quicksort back part

def quickSort(list_): #quicksort
    quickSortPre(list_, 0, len(list_)-1)
'''
end of quickSort
'''
def alSort(list_, mySort = bubbleSort): #use mysort to select the sort function
    mySort(list_) #sort list_
    print mySort.func_name #print sort function name

li = [2,4,2,9,5,7,3]
print li
#merge(li, 0, 4, len(li))
#li = alSort(li, mySort=mergeSort)
alSort(li, mySort=quickSort)
print li