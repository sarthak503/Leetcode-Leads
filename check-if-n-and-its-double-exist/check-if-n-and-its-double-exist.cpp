class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int,int> m;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int e=2*arr[i];
            int d=arr[i]/2;
            if(m.find(e)!=m.end()||(arr[i]%2==0 && m.find(d)!=m.end()))
                return true;
            else
                m[arr[i]]=1;
        }
        return false;
    }
};