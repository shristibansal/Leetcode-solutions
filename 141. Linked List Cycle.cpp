/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *a,*b;
        a=head;
        b=head;
        while(b !=NULL && b->next!=NULL)
        {
            b=b->next->next;
                a=a->next;
            if(a==b)
                return true;          
                
        }
        return false;
    }
};