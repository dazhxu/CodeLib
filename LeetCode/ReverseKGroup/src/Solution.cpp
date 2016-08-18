/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-18 15:02
 * @file Solution.cpp
 * @description 
 */

#include<iostream>

using namespace std;

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0), *pre = &dummy;
        ListNode *p=head, *tmp = pre, *first;
        ListNode *cur_pre = pre;
        pre -> next = head;
        while(p) {
            ListNode *temp=p;
            for(int i=0;i<k;i++) {
                if(!temp) return dummy->next;
                temp=temp->next;
            }
            first = p;
            tmp = p;
            p=p->next;
            for(int i=0;i<(k-1);i++) {
                if(p) {
                    cur_pre = p->next;
                    p->next = tmp;
                    tmp = p;
                    p = cur->pre;   
                } else {
                    break;
                }
            }
            pre->next = tmp;
            first->next = p;
            pre = first;
        }
        return dummy.next;
    }
}

