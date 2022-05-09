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
    bool isPalindrome(ListNode* head) {
        ListNode* ptr=head;
        int cnt=0,mid=0;
        while(ptr){
            ptr=ptr->next;
            cnt++;
        }
        mid=cnt/2;
        
        ptr=head;
        int cnt1=0;
        bool flag=true;
        stack<int> s;
        while(ptr){
            if(cnt1<mid){
                s.push(ptr->val);
            }
            else if(cnt1==mid && cnt%2!=0){
                ptr=ptr->next;
                cnt1++;
                continue;
            }
            else{
                if(s.top()==ptr->val){
                    s.pop();
                }
                else{
                    flag=false;
                    break;
                }
            }
            cnt1++;
            ptr=ptr->next;
        }
        return flag;
    }
};