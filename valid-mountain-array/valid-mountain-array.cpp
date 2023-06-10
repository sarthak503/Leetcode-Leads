class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        int mx=INT_MIN,idx=-1;
        for(int i=0;i<arr.size();i++)
            if(mx<arr[i]){
                idx=i;
                mx=arr[i];
            }
        if(idx==0 || idx==arr.size()-1) return false;
        for(int i=0;i<idx;i++){
            if(arr[i]>=arr[i+1])
                return false;
        }
        
        for(int i=idx+1;i<arr.size();i++){
            if(arr[i]>=arr[i-1])
                return false;
        }
        return true;
    }
};