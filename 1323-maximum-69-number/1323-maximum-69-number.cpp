class Solution {
public:
    int maximum69Number (int num) {
        vector<int> a;
        while(num>0){
            int d=num%10;
            a.push_back(d);
            num/=10;
        }
        int n=a.size();
        for(int i=n-1;i>=0;i--){
            if(a[i]!=9){
                a[i]=9;
                break;
            }
        }
        num=0;
        for(int i=n-1;i>=0;i--){
            int d=a[i];
            num=num*10+d;
        }
        return num;
    }
};