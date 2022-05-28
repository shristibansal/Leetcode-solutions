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
    ListNode *detectCycle(ListNode *head) {
       
        ListNode *a,*b,*c;
        a=b=c=head;
        bool flag = false;
        while(b!=NULL && b->next!=NULL)
        {
            b=b->next->next;
            a=a->next;
            if(a==b)
            { flag=true; 
            break;
            }
        }
        if(flag==true)
        {
          while(a!=c)
            {
                a=a->next;
                c=c->next;
            }
            return a;
        }
        return NULL;
    }
};