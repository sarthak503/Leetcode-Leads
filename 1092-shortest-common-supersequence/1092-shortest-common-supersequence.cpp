class Solution {
public:
    string shortestCommonSupersequence(string a, string b) {
        int m=a.size(),n=b.size();
        int t[m+1][n+1];
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0 || j==0)
                t[i][j]=0;
            }
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(a[i-1]==b[j-1]){
                    t[i][j]=t[i-1][j-1]+1;
                }
                else{
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        string ans;
        int l=m,r=n;
        while(l>0 && r>0){
            if(a[l-1]==b[r-1]){
                ans.push_back(a[l-1]);
                l--;
                r--;
            }
            else{
                if(t[l-1][r]>t[l][r-1]){                    
                    ans.push_back(a[l-1]);
                    l--;
                }
                else{
                    ans.push_back(b[r-1]);
                    r--;
                }
            }
        }
        while(l>0){   
         ans.push_back(a[l-1]);
         l--;
        }
         while(r>0){   
         ans.push_back(b[r-1]);
         r--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};