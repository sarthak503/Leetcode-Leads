class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int l1=word1.length(),l2=word2.length();
        if(l1!=l2)
            return false;
        int a[26]={0},b[26]={0};
        for(auto x:word1){
            a[x-'a']++;
        }
        for(auto x:word2){
            b[x-'a']++;
        }
        
        for(int i=0;i<26;i++){
            if(a[i]==0 && b[i]!=0 || a[i]!=0 && b[i]==0){
                return false;
            }
        }
        sort(a,a+26);
        sort(b,b+26);
        for(int i=0;i<26;i++){
            cout<<i<<":"<<a[i]<<"-"<<b[i]<<endl;
            if(a[i]!=b[i])
                return false;
        }
        return true;
    }
};