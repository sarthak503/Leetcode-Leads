class Solution {
public:
    bool isLeap(int y) { 
        return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
    }
    string dayOfTheWeek(int day, int month, int year) {
        int daysTillMonth[12] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
        string dayOfWeekNames[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday","Saturday" };
        int totDays=4 + day + (month > 2 && isLeap(year) ? 1 : 0); //febraury count in leap yr
        
         for(int i=1971;i<year;i++){
            if(isLeap(i))
                totDays+=366;
            else
                totDays+=365;
        }
        totDays+=daysTillMonth[month - 1];        
        return dayOfWeekNames[totDays%7];
    }
};