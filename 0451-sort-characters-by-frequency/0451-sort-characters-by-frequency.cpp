class Solution {
public:
    string frequencySort(string s) {
        /*
        sTreet
        s->1
        T->1
        r->1
        e->2
        t->1
        
        eetTs
            
        */
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto x:m){
            pq.push({x.second,x.first});
        }
        string ans;
        while(!pq.empty()){
            int f=pq.top().first;
            char ch=pq.top().second;
            pq.pop();
            for(int i=0;i<f;i++)
                ans+=ch;          
                
        }
        return ans;
        
//         map<char,int> m;
//         for(char ch:s){
//             m[ch]++;
//         }
//         multimap<int,char> m1;
//         for(auto x:m){
//             m1.insert({x.second,x.first});
//         }
//         multimap<int, int>::iterator itr;
//         cout << "\nThe multimap m1 is : \n";
//         cout << "\tKEY\tELEMENT\n";
//         string rev;
//         for (auto itr:m1) {
//         cout << '\t' << itr.first << '\t' << itr.second
//              << '\n';
            
//             int a=itr.first;
//             char ch=itr.second;
//             for(int i=0;i<a;i++){
//                 rev=ch+rev;
//             }
//         }
//         cout << endl;
        
//         return rev;
    }
};