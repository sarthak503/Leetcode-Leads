class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
     
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            if(arr[i]==0){
                arr.insert(arr.begin() + i+1, -1);
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]==-1)
                arr[i]=0;
        }
        int sz=arr.size();
        while(sz!=n){
            sz--;
            arr.pop_back();
            
        }
            
        
    }
};