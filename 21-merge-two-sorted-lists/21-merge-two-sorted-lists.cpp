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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ptr1=list1;
        ListNode* ptr2=list2;
        ListNode* node=new ListNode(-1);
        ListNode* ans= node;
        while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1->val<ptr2->val){
                ans->next=ptr1;ptr1=ptr1->next;
                
            }
            else{
                ans->next=ptr2;ptr2=ptr2->next;
            }
            ans=ans->next;
        }
        while(ptr1!=NULL){
            ans->next=ptr1;
            ptr1=ptr1->next;
            ans=ans->next;
        }
        while(ptr2!=NULL){
            ans->next=ptr2;
            ptr2=ptr2->next;
            ans=ans->next;
        }
        return node->next;
    }
};