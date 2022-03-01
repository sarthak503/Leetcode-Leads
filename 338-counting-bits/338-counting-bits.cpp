class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        int cnt=0;
        for(int i=0;i<=n;i++){
            int temp=i;
            cnt=0;
            while(temp>0){
                temp&=(temp-1);
                cnt++;
            }
            v.push_back(cnt);
        }
        return v;
    }
};