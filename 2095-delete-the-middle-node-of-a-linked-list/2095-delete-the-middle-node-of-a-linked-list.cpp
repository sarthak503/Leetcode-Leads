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
    ListNode* deleteMiddle(ListNode* head) {
        /*
        1->2->4->5->6->NULL
              f     f 
        s  s   
   
        ans is s;(when f->next is NULL)
        
        1->2->4->5->NULL
              f      f
        s  s  
 
        ans is s->next (when f is NULL)

        */
        if(head->next==NULL)
            return NULL;
        ListNode* slow=head;
        ListNode* fast=head->next->next;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        
        slow->next=slow->next->next;

        return head;
    }
};