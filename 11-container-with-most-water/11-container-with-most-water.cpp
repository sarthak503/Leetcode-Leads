class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx=-1;
        int i=0,n=height.size(),j=n-1;
        while(i<j){
            int l=j-i;
            int b=min(height[i],height[j]);
            int area=l*b;
            mx=max(mx,area);
            if(height[i]>height[j])
                j--;
            else
                i++;
        }
        return mx;
    }
};