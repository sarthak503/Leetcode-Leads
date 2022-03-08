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
        if(head==NULL) return false;
        ListNode *ptr=head;
        ListNode *ptr1=head;
        while(ptr!=NULL && (ptr->next)!=NULL){
            ptr=ptr->next->next;
            ptr1=ptr1->next;
            
            if(ptr==ptr1)
                return true;
        }
            
    return false;
    }
};