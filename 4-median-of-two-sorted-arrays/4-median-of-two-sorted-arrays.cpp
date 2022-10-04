class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int m=nums1.size(),n=nums2.size();
        if(m+n<2)
            return m>0?nums1[0]:nums2[0];
        int i=0,j=0;
        while(i<m && j<n){
            if(nums1[i]>nums2[j]){
                ans.push_back(nums2[j]);
                j++;
            }
            else{
                ans.push_back(nums1[i]);
                i++;
            }
        }
        while(i<m){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            ans.push_back(nums2[j]);
            j++;
        }
        for(auto x:ans)
            cout<<x<<endl;
        int mid=(m+n)/2;
        cout<<m<<n;
        if((m+n)%2!=0)
            return ans[mid]*1.0;
        cout<<"Passed";
        return (ans[mid]+ans[mid-1])/2.0;
    }
};