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
    int x=INT_MAX;
    void depth(TreeNode* &root, int i){
        if(root==NULL)return;
        if(root->left==NULL and root->right==NULL){x=min(x,i+1);return;}
        depth(root->left, i+1);
        depth(root->right, i+1);
    }
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0;
        depth(root, 0);
        return x;
    }
};