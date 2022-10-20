class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int,char> m;
        m[1]='I';
        m[5]='V';
        m[10]='X';
        m[50]='L';
        m[100]='C';
        m[500]='D';
        m[1000]='M';
        string s="";
        while(num>0){
            cout<<num<<endl;
           if( num>=1000){
               num-=1000;
               s+=m[1000];
           }
           else if(num>=500 && num <1000){
               if(num>=900){
                   num-=900;
                   s+=m[100];s+=m[1000];
               }
               else{
                   num-=500;
                   s+=m[500];
               }
           }
           else if(num>=100 && num <500){
               if(num>=400){
                   num-=400;
                   s+=m[100];s+=m[500];
               }
               else{
                   num-=100;
                   s+=m[100];
               }
           }
           else if(num>=50 && num <100){
               if(num>=90){
                   num-=90;
                   s+=m[10];s+=m[100];
               }
                else{
                   num-=50;
                   s+=m[50];
               }
               
           }
           else if(num>=10 && num <50){
               if(num>=40){
                   num-=40;
                   s+=m[10];s+=m[50];
               }
               else{
                   num-=10;
                   s+=m[10];
               }
           }
           else if(num>=5 && num <10){
               if(num>=9){
                   num-=9;
                   s+=m[1];s+=m[10];
               }
               else{
                   num-=5;
                   s+=m[5];
               }
           }
           else if(num>=1 && num <5){
               if(num>=4){
                   num-=4;
                   s+=m[1];s+=m[5];
               }
               else{
                   num-=1;
                   s+=m[1];
               }
           }
        }
        return s;
            
    }
};