class Solution {
public:
    int addDigits(int num) {
        if(num<10)
            return num;
        while(true){
            int sum=0;
            while(num>0){
            int d=num%10;
            num/=10;
            sum+=d;
        
            }
            cout<<sum<<endl;
            if(sum<10)
            return sum;
            num=sum;
            
        }
            
        
    }
};