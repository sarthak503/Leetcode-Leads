class Solution {
public:
    int lengthOfLongestSubstring(string str) {
       int i, j, res = 0;
      int n=str.length();
        map<char, int> mp;
        i = j = 0;
        
        while(j < n)
        {
            mp[str[j]]++;
            if(mp.size() == j-i+1)
                res = max(res, j-i+1);
            
            else if(mp.size() < j-i+1)
            {
                while(mp.size() < j-i+1)
                {
                    mp[str[i]]--;
                    if(mp[str[i]] == 0)
                        mp.erase(str[i]);
                    ++i;
                }
            }
            j++;
        }
    
    return res;
    }
};