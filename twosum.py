
def twoSum(nums, target):
    """
    :type nums: List[int]
    :type target: int
    :rtype: List[int]
    """
    ret = [] #store the result
    hashtbl = {} #using hash tabel to store the index of item
    for i in range(len(nums)):
        n = hashtbl.get(nums[i]) #get the index of nums[i]
        if n == None:   # if the nums[i] is not in the hash table, put the (nums[i],i) to the hash table
            hashtbl[nums[i]] = i
        n = hashtbl.get(target - nums[i]) #get the number which adds nums[i] resulting target
        if n != None and n < i: #if find the numbers, append the two numbers to ret list
            ret.append(n+1)
            ret.append(i+1)
            return ret


nums = [5,2,4]
target = 6
ret = twoSum(nums, target)
print ret