class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        //int p=1;
        //vector<int> nums1;
        // unordered_map <int,int> m;
        // for(int i=0;i<nums.size();i++){
        //     if(m.find(nums[i])==m.end()){
        //         if(nums[i]>=0){
        //             m[nums[i]]=1;
        //             cout<<nums[i]<<"->";
        //         }
        //         if(nums[i]<0){
        //             m[nums[i]]=-1;
        //         }
        //     }
        // }
        sort(nums.begin(),nums.end());
        int l=nums.size();
        int maxx=max((nums[0]*nums[1]*nums[l-1]),(nums[l-1]*nums[l-2]*nums[l-3]));
        
        // }
        // sort(nums.begin(),nums.end());
        // int l=nums.size();
        // for(int i=l-1;i>l-4;i--){
        //     cout<<nums[i]<<endl;
        //     p*=nums[i];
        //     if(nums[i]!=0){
        //         cout<<m[nums[i]]<<endl;
        //         if(m[nums[i]]==0)
        //             p=p*-1;
        //         else
        //         p=p*m[nums[i]];
        //     }
        // }
        return maxx;;
    }
};