class Solution {
public:
   string stak(string s){
        stack <char> st;
       int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!='#'){
                st.push(s[i]);
                cnt++;
            }
            else{
                 if(!st.empty() && s[i]=='#')
                    st.pop();
                cnt--;
            }
            
        }
       //cout<<"cnt="<<st.size();           
        string str1="";
       while(!st.empty()){
            cout<<st.top()<<"->";
            str1+=st.top();
            st.pop();
        }
       cout<<endl;
       return str1;
    }
        
    bool backspaceCompare(string s, string t) {
      string ss=stak(s);
      string tt=stak(t);
        cout<<ss<<"="<<tt;
        if(ss==tt)
            return true;
            return false;
        
    }
};