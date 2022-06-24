/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
         int width=0;
        queue<pair<TreeNode*,int>> q;   //For {node,index}
        q.push({root,0});
        
        while(!q.empty())
        {
            int size=q.size();          //No. of nodes in a level or Level Size=No. of nodes in q
            int first_idx, last_idx;
            int min=q.front().second;    //To get the min idx in that level
            
            //Traversing the level to compute index of each node
            for(int i=0; i<size; i++)
            {
                TreeNode* node=q.front().first;
                long long int curr_idx=q.front().second;   //Current index of the node
                curr_idx=curr_idx-min;           //Updating curr_idx to avoid overflow
                q.pop();              //For getting the next node
                
                if(i==0)                 //For first index
                    first_idx=curr_idx;
                if(i==size-1)           //For last index
                    last_idx=curr_idx;
                if(node->left)
                    q.push({node->left,2*curr_idx+1});   //Left idx=2i+1
                if(node->right)
                    q.push({node->right,2*curr_idx+2});   //Right idx=2i+2
            }
            width=max(width,last_idx-first_idx+1);    //For max width
        }
        return width;
    }
};