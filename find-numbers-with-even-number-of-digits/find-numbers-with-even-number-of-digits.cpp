class Solution {
public:
    int countDigit(int n){
        int cnt=0;
        while(n>0){
            n/=10;
            cnt++;
        }
        return cnt;
    }
    
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(auto x:nums)
            if(countDigit(x)%2==0)
                cnt++;
        
        return cnt;
        
    }
};