#include <iostream>
using namespace std;
class Date; //****************要记得先声明！！！*****************
class Time {
public:
    Time(int hh, int mm, int ss) : hour(hh), minute(mm), second(ss){};
    void display(Date &) const;

private:
    int hour;
    int minute;
    int second;
};
/*补充Date类的定义，并声明友元类 */
class Date {
public:
    Date(int _year, int _month, int _day) : year(_year), month(_month), day(_day){};
    friend Time;

private:
    int year, month, day;
};
/*添加display函数的定义 */
inline void Time::display(Date &d) const{
    cout << d.year << '/' << d.month << '/' << d.day << endl;
    cout << hour << ':' << minute << ':' << second << endl;
} 

int main()
{
    int year, month, day;
    cin >> year >> month >> day;
    Date d1(year, month, day);
    int hour, minute, second;
    cin >> hour >> minute >> second;
    Time t1(hour, minute, second);
    t1.display(d1);
    return 0;
}