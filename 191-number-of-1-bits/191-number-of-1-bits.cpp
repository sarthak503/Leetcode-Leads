class Solution {
public:
    int hammingWeight(uint32_t n) {
       uint32_t  count = 0;
        while(n>0){
            count+=n%2;
            n/=2;
        }
        return count; 
    }
};