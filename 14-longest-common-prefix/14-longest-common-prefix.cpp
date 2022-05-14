class Solution {
public:
    string longestCommonPrefix(vector<string>& S){
          if (S.size() == 0) return "";
    string prefix = S[0];
    for (int i = 1; i < S.size(); i++)
        while (S[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length()- 1);
            if (prefix =="") return "";
        }        
    return prefix;
    }
};