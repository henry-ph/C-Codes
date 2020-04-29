#include<iostream>

using namespace std;

class BaseClass {
public:
    BaseClass() : number(0) {
        cout << "BaseClass constructed." << endl;
    }
    ~BaseClass() {
        cout << "BaseClass deconstructed." << endl;
    }
private:
    int number;
};

class DerivedClass: public BaseClass {
public:
    DerivedClass() : BaseClass() {
        cout << "DerivedClass constructed." << endl;
    }
    ~DerivedClass() {
        cout << "DerivedClass deconstructed." << endl;
    }
};

int main() {
    DerivedClass();
    return 0;
}