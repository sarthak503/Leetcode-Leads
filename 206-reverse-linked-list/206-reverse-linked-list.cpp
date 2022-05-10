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
    ListNode* reverseList(ListNode* head) {
        //RECURSIVE
        
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* node= reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return node;
        
      //ITERATIVE
      // ListNode* prev=NULL;
      // ListNode* nex=NULL;
      // ListNode* curr=head;
      // while(curr!=NULL){
      //     nex=curr->next;
      //     curr->next=prev;
      //     prev=curr;
      //     curr=nex;
      // }
      // return prev;
    }
};