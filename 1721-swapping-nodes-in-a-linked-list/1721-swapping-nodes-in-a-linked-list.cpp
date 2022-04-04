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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        int c=0;
        while(temp!=NULL){
            temp=temp->next;
            c++;
        }
        cout<<c;
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        for(int i=0;i<k-1;i++) ptr1=ptr1->next;
        for(int i=0;i<c-k;i++) ptr2=ptr2->next;
        
        swap(ptr1->val,ptr2->val);
        return head;
    }
};