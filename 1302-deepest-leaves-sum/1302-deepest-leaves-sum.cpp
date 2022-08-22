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
    void dfs(TreeNode* root, int d,int &dpt,int &s){
        if(!root) return ;
        if(!root->left && !root->right){
            if(d==dpt){
                s+=root->val;
            }
            else if(d>dpt){
                dpt=d;
                s=root->val;
            }
            return ;
        }
          dfs(root->left,d+1,dpt,s);
          dfs(root->right,d+1,dpt,s);
    }
    int deepestLeavesSum(TreeNode* root) {
        //BFS 
        //queue<TreeNode*> q;
        // q.push(root);
        // int ans=0;
        // while(!q.empty()){
        //     int si=q.size();
        //     int s=0;
        //     while(si--){
        //         TreeNode* h=q.front();
        //         q.pop();
        //         s+=h->val;
        //         if(h->left) q.push(h->left);
        //         if(h->right) q.push(h->right);
        //     }
        //     if(q.empty())ans=s;
        // }
        // return ans;
        int s=0,maxdpt=1;
        dfs(root,1,maxdpt,s);
        return s;
    }
};