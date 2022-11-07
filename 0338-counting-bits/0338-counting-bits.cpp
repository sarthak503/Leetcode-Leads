class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
        while(n>0){
            if(n&1==1)
                cnt++;
            n=n>>1;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int> count;
        for(int i=0;i<=n;i++){
            int t=hammingWeight(i);
            count.push_back(t);
        }
        return count;
    }
};