class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int ls=s.length(),lt=t.length();
        if(ls!=lt){
            return false;
        }
        else{
            for(int i=0;i<ls;i++){
                if(s[i]!=t[i])
                    return false;
            }
        }
        return true;
        
    }
};