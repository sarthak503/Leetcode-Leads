class Solution {
public:
    int largestInteger(int n) {
        priority_queue<int> odd;
        priority_queue<int> even;
        vector<int> type;            // 1 -> odd ,0 -> even

        int res = 0;

        while(n > 0){

            int rem = n % 10;

            if(rem % 2 == 0){
                even.push(rem);
                type.push_back(0);
            }else{
                odd.push(rem);
                type.push_back(1);
            }

            n = n / 10;
        }

        reverse(type.begin(),type.end());

        for(int i = 0; i < type.size(); i++){
            if(type[i] == 0){
                res = res*10 + even.top();
                even.pop();
            }else{
                res = res*10 + odd.top();
                odd.pop();
            }
        }

        return res;
    }
};