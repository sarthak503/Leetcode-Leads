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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int cnt=0;
        ListNode* ptr=head;
        int l=left,r=right;
        stack<int> s;
        while(ptr!=NULL){
            cnt++;
            if(cnt>=left && cnt<=right){
                s.push(ptr->val);
            }
            ptr=ptr->next;
        }
        ptr=head;
        cnt=0;
        left=l;
        right=r;
        while(ptr!=NULL){
            cnt++;
            if(cnt>=left && cnt<=right){
                ptr->val=s.top();
                cout<<ptr->val<<"->";
                s.pop();                
            }
            ptr=ptr->next;
        }
        return head;
    }
};