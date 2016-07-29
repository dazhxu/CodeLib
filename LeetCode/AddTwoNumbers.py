class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

def addTwoNumbers(l1, l2):
    temp_l1 = l1.next
    temp_l2 = l2.next
    if l1!= None and l2 != None:
        ret = ListNode((l1.val + l2.val)%10)
        carry = (l1.val + l2.val)/10
        temp_ret = ret
    else:
        temp_ret = ret = None
        carry = 0


    while temp_l1 != None and temp_l2 != None or carry == 1:
        if temp_l1 != None:
            a = temp_l1.val
        else:
            a = 0

        if temp_l2 != None:
            b = temp_l2.val
        else:
            b = 0

        temp = ListNode((a + b + carry)%10)
        carry = (a + b + carry)/10
        temp_ret.next = temp
        temp_ret = temp
        if temp_l1 != None:
            temp_l1 = temp_l1.next
        if temp_l2 != None:
            temp_l2 = temp_l2.next

    return ret

l1 = ListNode(5)
l2 = ListNode(5)
ret = addTwoNumbers(l1,l2)
print ret.val,ret.next.val