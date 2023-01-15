//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&nums, int n)
    {   
        // Your code here
        unordered_map<int,int> m;
        int sm=0,maxS=0;
        for(int i=0;i<n;i++){
            sm+=nums[i];
            if(sm==0){
                maxS=i+1;
            }
            else{
                if(m.find(sm)!=m.end()){
                    maxS=max(maxS,i-m[sm]);
                }
                else{
                    m[sm]=i;
                }
                
            }
        }
        return maxS;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends