class Solution {
public:
    int hammingWeight(uint32_t n) {
       uint32_t  count = 0;
        while(n>0){
            cout<<n<<endl;
            n&=(n-1); 
            count++; 
        }
        return count; 
    }
};