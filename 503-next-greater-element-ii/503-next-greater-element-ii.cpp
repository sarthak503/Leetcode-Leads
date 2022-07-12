class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    int n=nums.size();
    vector<int> res(n,0);    
    stack <int> st;
    for(int i=0;i<nums.size();i++) {
        while(!st.empty() && nums[st.top()] < nums[i]) {
            
            res[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }
    
    for(int i=0;i<nums.size();i++) {
        while(!st.empty() && nums[st.top()] < nums[i]) {
            res[st.top()] = nums[i];
            st.pop();
        }
    }

    while(!st.empty()) {
        res[st.top()] = -1;
        st.pop();
    }
    return res;
        
    }
};