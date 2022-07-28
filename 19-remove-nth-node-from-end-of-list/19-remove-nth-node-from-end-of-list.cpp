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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return NULL;
        if(head->next== NULL){
            if(n==1){
                return NULL;
            }
            else{
                return head;
            }
        }
            
        ListNode* ptr=head;
        int cnt=0;
        while(ptr){
            cnt++;
            ptr=ptr->next;
        }
        int tot=cnt;
        cnt=1;
        int fS=tot-n+1;
        if(fS-1==0) return head->next;
        ListNode* prev=NULL;
        ListNode* cur=head;
        while(cnt<fS){
            prev=cur;
            cur=cur->next;
            cnt++;            
        }
        prev->next=cur->next;
        cur=NULL;
        return head;
    }
};