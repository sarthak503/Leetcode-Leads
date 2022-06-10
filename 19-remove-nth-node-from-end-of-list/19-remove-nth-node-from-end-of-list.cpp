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
        
        if(head==NULL) return head;
        ListNode* ptr=head;
        int cnt=0;
        while(ptr){
            ptr=ptr->next;
            cnt++;
            
        cout<<cnt;
        }
        if(cnt == n) return head -> next;
        cnt=cnt-n;
        ptr=head;
        cnt--;
        while(cnt){
            cnt--;
            ptr=ptr->next;
        }
        cout<<ptr->val;
        ListNode* ptr1=ptr->next->next;
        ptr->next=ptr1;
        return head;
    }
};