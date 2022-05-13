class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> a;
        if(n==1 && k==1) return 1;
        else if(n==1 && k>1) return -1;
        for(int i=0;i<=n/2;i++){
            if(n%(i+1)==0) a.push_back(i+1);
        }
        for(auto x:a) cout<<x<<" ";
        a.push_back(n);
        if(k>a.size())
        return -1;
        return a[k-1];
    }
};