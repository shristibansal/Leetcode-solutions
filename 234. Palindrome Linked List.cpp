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
    bool isPalindrome(ListNode* head) {
        ListNode* t = head;
        ListNode* p = head;
        while(t->next != NULL && t->next->next != NULL)
        {
            p = p->next;
            t = t->next->next;
        }
        ListNode* curr = p->next;
        ListNode* prev = NULL;
        while(curr != NULL)
        {
            ListNode* a = curr->next;
            curr->next = prev;
            prev = curr;
            curr = a;
        }
        p->next = prev;
        t = head;
        p = p->next;
        while(p != NULL)
        {
            if(p->val != t->val)
                return false;
            p = p->next;
            t = t->next;
        }
        return true;
    }
};