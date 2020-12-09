/**
 * @author: xuyuzhuang - xuyuzhuang@buaa.edu.cn
 * @last modified 2016-08-17 16:59
 * @file Solution.cpp
 * @description 
 */

#include<stream>
#include<vector>

using namespace std;

class Solution {
private:
    struct cmp {
        bool operator ()(const ListNode* a, const ListNode* b) {
            return a->val > b->val;
        }
    };

public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n==0) return NULL;

        ListNode dummy(0), *res=&dummy;
        priority_queue<ListNode*, vector<ListNode*>, cmp> que;
        for(int i=0;i<n;i++) {
            if(lists[i])
                que.push(list[i]);
        }

        while(!que.empty()) {
            ListNode *p = que.top();
            que.pop();
            res->next = p;
            res = p;

            if(p->next)
                que.push(p->next);
        }
        return dummy.next;
    }
};

