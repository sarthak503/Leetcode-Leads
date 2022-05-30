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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inodd(root,ans);
        return ans;
    }
    void inodd(TreeNode* root,vector<int> &a){
        if(root==NULL){
            return ;
        }
        
        inodd(root->left,a);
        cout<<root->val<<endl;
        a.push_back(root->val);
        inodd(root->right,a);
    }
};