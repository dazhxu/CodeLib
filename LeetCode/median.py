def findMedianSortedArrays(nums1,nums2):
    m = len(nums1)
    n = len(nums2)
    low1 = low2 = 0 #the index of lower location of list1 and list2
    high1 = m - 1 #the index of higher location of list1
    high2 = n - 1   #the index of higher location of list2
    min = 0     #the minimum number of the two middle numbers
    max = 0     #the maximum number of the two middle numbers, if the middle  is one number, min = max
    while low1 <= high1 and low2 <= high2:
        if nums1[low1] < nums2[low2]:
            min = nums1[low1]
            low1 += 1
        else:
            min = nums2[low2]
            low2 += 1

        if nums1[high1] > nums2[high2]:
            max = nums1[high1]
            high1 -= 1
        else:
            max = nums2[high2]
            high2 -= 1

    while low1 <= high1:
        min = nums1[low1]
        low1 += 1
        max = nums1[high1]
        high1 -= 1


    while low2 <= high2:
        min = nums2[low2]
        low2 += 1
        max = nums2[high2]
        high2 -= 1

    return float(max + min)/2

list1 = [10001]
list2 = [10000]
ret = findMedianSortedArrays(list1,list2)
print ret

