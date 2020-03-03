#include<iostream>
#include<cmath>
using namespace std;
const double PI = acos(-1.0);

enum shape_set
{
    circle = 1,
    rectangle,
    cube
};

bool IsLegal(double x) {
    if (x <= 0) {
        cout << "The input must be positive, please type in the number again." << endl;
        return true;
    }
    return false;
}
int main() {
    int opretor;
    double area;
    cout << "Choose a shape, type in 1 for circle, 2 for rectangle, 3 for cube." << endl;
    cin >> opretor;
    switch (opretor) {
        case circle:
            double radious;
            cout << "Please type in the radious of the circle: ";
            cin >> radious;
            while (IsLegal(radious))
                cin >> radious;
            area = PI * radious * radious;
            cout << "The area is: " << area << endl;
            break;
        case rectangle:
            double length, width;
            cout << "Please type in the length and width of the rectangle: ";
            cin >> length;
            while (IsLegal(length))
                cin >> length;
            cin >> width;
            while (IsLegal(width))
                cin >> width;
            area = length * width;
            cout << "The area is: " << area << endl;
            break;
        case cube:
            cout << "Please type in the length of the cube: ";
            cin >> length;
            while (IsLegal(length))
                cin >> length;
            area = length * length;
            cout << "The area is: " << area << endl;
            break;
    }
    return 0;
}