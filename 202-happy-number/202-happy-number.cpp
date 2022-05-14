class Solution {
public:
    bool isHappy(int n) {
        map<int,int> map1;
    map1.insert({0, 0});
    map1.insert({1, 1});
    map1.insert({2, 4});
    map1.insert({3, 9});
    map1.insert({4, 16});
    map1.insert({5, 25});
    map1.insert({6, 36});
    map1.insert({7, 49});
    map1.insert({8, 64});
    map1.insert({9, 81});
    unordered_map <int,int> mp;
    int sum=0;
    while(n!=1){
        
        while(n>0){
        int d=n%10;
        sum+=map1[d];
        n=n/10;
        n=floor(n);  
        }
        n=sum;
        sum=0;
        
        if(mp.find(n)==mp.end())
            mp[n]++;
        else
            return false;
    }
    return true;
    }
    
};