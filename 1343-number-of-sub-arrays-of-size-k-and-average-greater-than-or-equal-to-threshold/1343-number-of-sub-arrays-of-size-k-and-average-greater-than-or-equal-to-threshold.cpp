class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int cnt=0,s=0;float p=0.0;
        int n=arr.size();
        int avg=0;
        int i=0;
        while(i<n){
            if(i<k){
                s+=arr[i];
            }
            else{
                
                p=(s*1.0)/k;
                cout<<avg<<endl;
                if(p>=threshold)
                    cnt++;
                s+=arr[i]-arr[i-k];
            }
            i++;
        }
        p=(s*1.0)/k;
        if(p>=threshold)
                    cnt++;
        return cnt;
        
    }
};