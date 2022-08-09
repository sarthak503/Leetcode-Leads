class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int i=0,j=0;
        string str= to_string(num);
        int n=str.size();
        int cnt=0;
        string s;
        while(j<n){
            if(j-i+1<k) j++;
            else if(j-i+1==k){
                s=str.substr(i,k);
                int div=stoi(s);
                cout<<div<<endl;
                if(div==0)
                {
                    i++;
                    j=i;
                    continue;
                }
                if(num%div==0 && div!=0)
                    cnt++;
                s.erase();
                i++;
                j=i;
            }
        }
        return cnt;
            
    }
};