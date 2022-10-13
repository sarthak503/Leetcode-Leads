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
    void deleteNode(ListNode* node) {
        // 4->5->1->9
        //   node
        ListNode *ptr=node;
        ListNode *ptr1=node->next;
        while(ptr->next!=NULL){
            swap(ptr->val,ptr1->val);
            if(ptr1->next==NULL){
                ptr->next=NULL;
                 break;
            }
            ptr=ptr->next;
            ptr1=ptr1->next;
           
        }
        //    p  p1 
        // 4->5->1->9->NULL
        //       p  p1
        // 4->1->5->9->NULL
        //       p  p1
        // 4->1->9->5->NULL
    
                 
        
                            
    }
};