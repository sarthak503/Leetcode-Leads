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
    ListNode* deleteDuplicates(ListNode* head) {
         if (!head) { return head; }
    
    int nums[201] = {0,};
    
    while (head) {
      nums[head->val + 100]++;
      head = head->next;
    }
    
    ListNode *ret = new ListNode(0);
    ListNode *tail = ret;
    
    for (int i = 0; i < 201; i++) {
      if (nums[i] == 1) {
        tail->next = new ListNode(i - 100);
        tail = tail->next;
      }
    }
    return ret->next;
    }
};