#include<iostream>
using namespace std;

float convert(float TempFer) {
    return (TempFer - 32) * 5 / 9;
}
int main() {
    float TempFer;
    cin >> TempFer;
    cout << convert(TempFer) << endl;
    return 0;
}