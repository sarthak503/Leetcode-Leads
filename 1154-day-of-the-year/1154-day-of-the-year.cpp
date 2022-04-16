class Solution {
public:
    bool checkYear(int year)
{
    // If a year is multiple of 400,
    // then it is a leap year
    if (year % 400 == 0)
        return true;
 
    // Else If a year is multiple of 100,
    // then it is not a leap year
    if (year % 100 == 0)
        return false;
 
    // Else If a year is multiple of 4,
    // then it is a leap year
    if (year % 4 == 0)
        return true;
    return false;
    }
    int dayOfYear(string date) {
        int months[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        int dd=0,mm=0,yyyy=0;
        yyyy=stoi(date.substr(0,4));
        mm=stoi(date.substr(5,2));
        dd=stoi(date.substr(8,2));
        bool flag=checkYear(yyyy);
        if(flag) months[2]++;
        int s=0;
        for(int i=1;i<mm;i++) s+=months[i];
        s+=dd;
        return s;
    }
};