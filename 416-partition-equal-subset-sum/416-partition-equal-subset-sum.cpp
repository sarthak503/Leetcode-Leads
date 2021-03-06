class Solution {
public:
    bool isSubsetSum(int n,vector<int>& arr, int sum){
        bool t[n+1][sum+1];
        // code here 
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)
                t[i][j]=0;
                if(j==0)
                t[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(arr[i-1]<=j){
                     t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
                }
                else{
                    t[i][j]=t[i-1][j];
                }
                
            }
        }
        return t[n][sum];
        
    }
    bool canPartition(vector<int>& arr) {
        int s=0;
        int N=arr.size();
        for(int i=0;i<N;i++){
            s+=arr[i];
        }
        if(s%2!=0){
            return 0;
        }
        return isSubsetSum(N,arr,s/2);
    }
};