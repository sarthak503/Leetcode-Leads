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
    bool hasCycle(ListNode *head) {
        bool flag=false;
        unordered_map<ListNode *, int> umap;
        ListNode *ptr1=head;
        ListNode *ptr=head;
        while(ptr!=NULL){
            if(umap.find(ptr)!=umap.end())
            {
                flag=true;
                break;
            }
            else{
                umap[ptr]=-1;
                ptr=ptr->next;
            }
        }
        // ListNode *ptr1=head;
        // while((ptr1->next)!=NULL){
        //    if(umap[ptr1]>1)
        //    {
        //        flag=true;
        //        break;
        //    }
        // }       
    return flag;
    }
};