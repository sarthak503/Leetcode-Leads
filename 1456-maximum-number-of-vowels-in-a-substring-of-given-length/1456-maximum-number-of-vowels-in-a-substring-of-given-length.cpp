class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=0,res=INT_MIN,cnt=0;
        int n=s.length();
        while(j<n){
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
                cnt++;
            if(j-i+1<k)
                j++;
            else if(j-i+1==k){
                res=max(res,cnt);
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                cnt--;
                i++;
                j++;
            }
        }
        return res;
    }
};