package com.xyz;

public class Solution {
    public void reorderList(ListNode head) {
        int num = 0;
        ListNode cur = head;
        while(cur != null) {
            ++num;
            cur = cur.next;
        }
        if(num <= 2) {
            return ;
        }
        ListNode pre;
        pre = head;
        for(int i = 0; i<(num+1)/2; ++i) {
            pre = pre.next;
        }
        cur = pre.next;
        pre.next = null;
        ListNode nxt;
        while(cur != null) {
            nxt = cur.next;
            cur.next = pre;
            pre = cur;
            cur = nxt;
        }
        mergeLists(head, pre);
    }

    void mergeLists(ListNode head, ListNode pre) {
        ListNode cur = head;
        while(cur != null) {
            ListNode tmp = cur.next;
            cur.next = pre;
            if(pre == null) break;
            ListNode tmp2 = pre.next;
            pre.next = tmp;
            cur = tmp;
            pre = tmp2;
        }
    }

    public static void main(String[] args) {
        ListNode head = new ListNode(1);
        ListNode cur = head;
        for(int i = 2; i <= 4; ++i) {
            ListNode tmp = new ListNode(i);
            tmp.next = null;
            cur.next = tmp;
            cur = tmp;
        }

        Solution s = new Solution();
        s.reorderList(head);

        cur = head;
        while (cur != null) {
            System.out.println(cur.val);
            cur = cur.next;
        }
    }
}
