class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        for(int i = 1;i<word1.size();i++)
            word1[i]=word1[i-1] + word1[i];
        for(int i = 1;i<word2.size();i++)
            word2[i]=word2[i-1] + word2[i];
        return word1[word1.size()-1] == word2[word2.size()-1];
    }
};