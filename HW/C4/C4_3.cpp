#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Equation{
public:
    Equation(double a, double b, double c) : _a(a), _b(b), _c(c){};
    void solve();
    double getA() { return _a; }
    double getB() { return _b; }
    double getC() { return _c; }

private:
    double _a, _b, _c;
};

void Equation:: solve() {
    double a = getA(), b = getB(), c = getC();
    if (!a) {
        if (!b) {
            if (c) {
                cout << '4' << endl;
                return;
            } 
            else {
                cout << '5' << endl;
                return;
            }
        }
        else {
            cout << '6' << endl;
            double x = (-c) / b;
            if (!x)
                x = 0;
            cout << fixed << setprecision(2) << x << endl;
            return;
        }
    }
    double delta = b * b - 4 * a * c;
    if (delta > 0) {
        cout << '1' << endl;
        double x1, x2;
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        cout << fixed << setprecision(2) << x1 << ' ' << x2 << endl;
        return;
    }
    else if (!delta) {
        cout << '2' << endl;
        double x = (-b) / (2 * a);
        if (!x)
            x = 0;
        cout << fixed << setprecision(2) << x << endl;
        return;
    }
    else {
        cout << '3' << endl;
        return;
    }
    return;
}

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    Equation tmp(a, b, c);
    tmp.solve();
}