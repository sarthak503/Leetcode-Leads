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
    bool isValidBST(TreeNode* root) {
        return valid(root, LONG_MAX,LONG_MIN);
    }
    bool valid(TreeNode* root,long end,long start){
        if(root==NULL) return true;
        if(root->val> start && root->val<end){
            return valid(root->left,root->val,start) && valid(root->right,end,root->val);
        }
        return false;
            
        
    }
};