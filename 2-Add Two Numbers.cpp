/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum =0, c=0;
        ListNode* head = new ListNode();
        ListNode* t = head;
        while(l1 || l2 || c)
        {
            sum =0;
            if(l1)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            t->next = new ListNode((sum+c)%10);
            t = t->next;
            c = (sum + c) / 10;
            
        }
        return head->next;
    }
};
