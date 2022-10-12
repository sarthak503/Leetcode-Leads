class Solution {
public:
    int convert(int p){
        int cnt=0;
        while(p!=1){
        cnt++;
        if(p%2==0)
            p/=2;
        else
            p=(3*p)+1;
        }
        return cnt;
    }
    int getKth(int lo, int hi, int k) {
        //x even -> x=x/2;
        //x odd  -> x=3*x+1;
        //if x=3 ---->>>> 3->10->5->16->8->4->2->[1]
         vector< pair <int,int> > ans;
        for(int i=lo;i<=hi;i++){
            ans.push_back(make_pair(convert(i),i));
        }
       
        sort(ans.begin(),ans.end());
        vector<int> a;
        for(auto x:ans){
            cout<<x.first<<" "<<x.second<<" ";
            a.push_back(x.second);
        }
        return a[k-1];
    }
};