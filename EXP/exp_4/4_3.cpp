#include<iostream>
using namespace std;
enum Sex
{
    Male,
    Female
};
char SEX[2][10] = {"Male", "Female"};

class Date {
public:
    Date(int y, int m, int d) : year(y), month(m), day(d){};
    Date(){};
    Date(const Date &D) : year(D.year), month(D.month), day(D.day){};
    ~Date(){};
    int getYear() {
        return year;
    }
    int getMonth() {
        return month;
    }
    int getDay() {
        return day;
    }

private:
    int year, month, day;
};

class People {
public:
    People(int _number, Sex _sex, Date _date) : number(_number), sex(_sex), date(_date){};
    People(){};
    People(const People &p) : number(p.number), sex(p.sex), date(p.date){};
    ~People(){};
    void showInfo() {
        cout << "Id: " << number << endl;
        cout << "sex: " << SEX[sex] << endl;
        cout << "Birth date: " << date.getYear() << '/' << date.getMonth() << '/' << date.getDay() << endl;
        return;
    }

private:
    int number;
    Sex sex;
    Date date;
};

int main() {
    Date date(1999, 9, 9);
    People peopleObject(1, Male, date);
    peopleObject.showInfo();
    return 0;
}