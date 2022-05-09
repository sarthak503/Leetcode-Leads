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
    ListNode* removeElements(ListNode* head, int val) {
        //cout<<head->val<<endl;

        if(head==NULL) return head;
        if(head->next == NULL && head->val==val) 
            return NULL;
        else if (head->next == NULL)
            return head;
        else{
            ListNode* temp=new ListNode(-1);
            ListNode* prev=temp;
            ListNode* curr=head;
            ListNode* nxt=NULL;
            prev->next=curr;
            while(curr){
                nxt=curr->next;
                if(curr->val==val){
                    prev->next=nxt;
                }
                else{
                    prev=curr;
                }
                
                    curr=curr->next;
            }
            return temp->next;
        }
       
    }
};