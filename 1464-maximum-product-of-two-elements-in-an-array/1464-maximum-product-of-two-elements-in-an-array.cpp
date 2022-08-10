class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        int n1=pq.top();pq.pop();
        int n2=pq.top();
        n1--;
        n2--;
        return n1*n2;
    }
};