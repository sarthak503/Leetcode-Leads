class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1,j=b.length()-1;
        string s="";
        char carry='0';
        while(i>=0 || j>=0){
            char chA=i>=0?a[i]:'0';
            char chB=j>=0?b[j]:'0';
            if(chA==chB){
                if(carry=='0'){
                    s+="0";
                }
                else{
                    s+="1";
                }
                carry=chA;
            }
            else if(chA!=chB){
                if(carry=='0'){
                    s+="1";
                }
                else{
                    s+="0";
                    carry='1';
                }
            }
            i--;j--;
        }
        if(carry=='1')
            s+="1";
        reverse(s.begin(), s.end());
        return s;
    }
};