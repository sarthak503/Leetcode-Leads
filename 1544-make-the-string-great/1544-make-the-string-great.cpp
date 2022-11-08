class Solution {
public:
    string makeGood(string s) {
        string str;
        while(s.size()>1){
            bool find =false;
            
            for(int i=0;i<s.length()-1;i++){
                char ch=s[i], nch=s[i+1];
                if(abs(ch-nch)==32){
                    s=s.substr(0,i)+s.substr(i+2);
                    find=true;
                    break;
                }
            }
            
            if(!find)
                break;
        }
        return s;
    }
};