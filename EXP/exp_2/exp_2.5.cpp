#include<iostream>
using namespace std;
struct TimeStruct {
    int year, month, day, hour, minute, second;
};

int main() {
    TimeStruct time;
    cout << "Input required here: ";
    cin >> time.year >> time.month >> time.day >> time.hour >> time.minute >> time.second;
    cout << "Output displayed here: " << time.year << ' ' << time.month << ' ' << time.day << ' ' << time.hour << ' ' << time.minute << ' ' << time.second << endl;
    return 0;
}