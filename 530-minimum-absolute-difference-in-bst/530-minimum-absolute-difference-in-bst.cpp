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
    void helper(TreeNode * root, vector<int>&v){
        if(root == NULL){
            return;
        }
        helper(root->left, v);
        v.push_back(root->val);
        helper(root->right, v);
    }
    
    int getMinimumDifference(TreeNode* root) {
	//the reason here that we are using the inorder traversal that we want consicutive elements next to each other so that the abs will be as less as possible
        vector<int>v;
        helper(root,v);
        int ans = INT_MAX;
        //finding the minimum abs difference between different nodes values of the tree
        for(int i = 0; i<v.size()-1; i++){
            if(abs(v[i]-v[i+1])<ans){
                ans = abs(v[i]-v[i+1]);
            }
        }
        
        return ans;
    }
};