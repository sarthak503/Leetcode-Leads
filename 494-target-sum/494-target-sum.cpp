class Solution {
public:
    int findTargetSumWays(vector<int>& arr, int target) {
        target=abs(target);
        int s=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            s+=arr[i];
        }
        int sum=(s+target)/2;
        int mod=1000000007;
        int t[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)
                t[i][j]=0;
                if(j==0)
                t[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(arr[i-1]<=j){
                     t[i][j]=(t[i-1][j-arr[i-1]] + t[i-1][j]);
                }
                else{
                    t[i][j]=t[i-1][j];
                }
                
            }
        }
        if(s<target||(s+target)%2!=0)
            return 0;
        return t[n][sum];
    }
    
};