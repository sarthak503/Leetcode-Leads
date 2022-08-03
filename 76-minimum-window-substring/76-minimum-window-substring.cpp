class Solution {
public:
    string minWindow(string s, string t) {
         unordered_map<char, int>map;
        unordered_map<int, int>ans;  //map to store the size and initial index of answer window
        for(auto x : t) map[x]++;
        int i = 0, j = 0, count = map.size(), minsize = INT_MAX, n = s.size();
        bool flag = true;
        while(j<n){
            if(map.find(s[j]) != map.end()){
               { map[s[j]]--;
                if(map[s[j]] == 0) count--; //  If any character's count in the map becomes zero, decrementing the count variable
               }
            }
            if(count > 0) j++;
            else if (count == 0){
                flag = false;
                while(count == 0){
                    minsize = min(minsize, j-i+1);
                    if(ans.find(minsize) == ans.end())
                      ans[minsize] = i; // Storing the minimum size of the window and initial index of string window
                    if(map.find(s[i]) != map.end())
                    {
                        map[s[i]]++;
                        if(map[s[i]] == 1) 
                            count++; 
                // If any character's count in the map becomes 1 from zero, incrementing count //variable
                    }
                    i++;
                }
                j++;
            }
        }
        cout<<minsize;
        if(minsize==INT_MAX|| flag) return "";
        string a;
        for(int j = ans[minsize]; j< ans[minsize] + minsize; j++) a.push_back(s[j]);
        return a;
        
    }
};