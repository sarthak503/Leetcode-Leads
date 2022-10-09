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
    vector<int> inord(TreeNode* root, vector<int> &ans){
        if(!root) return {};
        inord(root->left,ans);
        ans.push_back(root->val);
        inord(root->right,ans);
        return ans;
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> ans;
        inord(root,ans);
        int n=ans.size();
        int i=0,j=n-1;
        while(i<j){
            if(ans[i]+ans[j]==k)
                return true;
            else if(ans[i]+ans[j]>k)
                j--;
            else
                i++;
        }
        return false;
    }
};