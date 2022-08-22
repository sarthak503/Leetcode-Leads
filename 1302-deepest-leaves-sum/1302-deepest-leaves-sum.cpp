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
    
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int ans=0;
        while(!q.empty()){
            int si=q.size();
            int s=0;
            while(si--){
                TreeNode* h=q.front();
                q.pop();
                s+=h->val;
                if(h->left) q.push(h->left);
                if(h->right) q.push(h->right);
            }
            if(q.empty())ans=s;
        }
        return ans;
    }
};