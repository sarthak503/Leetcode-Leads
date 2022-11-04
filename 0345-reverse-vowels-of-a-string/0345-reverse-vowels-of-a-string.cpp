class Solution {
public:
    bool isVow(char ch){
        if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='I'||ch=='i'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
                return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int i=0,j=s.length();
        while(i<j){
            if(!isVow(s[i]))
               i++;
            if(!isVow(s[j]))
                j--;
            if(isVow(s[i]) && isVow(s[j])){
                char ch=s[i];
                s[i]=s[j];
                s[j]=ch;
                i++;
                j--;
            }
            
        }   
        return s;
    }
};