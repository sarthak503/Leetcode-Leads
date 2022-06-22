class Solution {
public:
    int numTrees(int n) {
        long long int c=1;
        for(int i =1;i<n;i++){
            c=c*2*(i*2+1)/(i+2);
        }
        return (int)c;
    }
};