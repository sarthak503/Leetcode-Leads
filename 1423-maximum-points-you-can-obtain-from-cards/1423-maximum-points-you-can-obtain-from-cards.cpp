class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l=k-1,r=cardPoints.size()-1,s=0;
        
        for(int i=0;i<k;i++){
           s+=cardPoints[i];
        }
        int mx=s;
        while(k--){
            s-=cardPoints[l];
            s+=cardPoints[r];
            mx=max(s,mx);
            l--;
            r--;
        }
        return mx;
        
    }
};