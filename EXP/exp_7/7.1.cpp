#include<iostream>

using namespace std;

class Animal {
public:
protected:
    int age;
};

class Dog: public Animal {
public:
    void SetAge(int n) {
        age = n;
    }
};

int main() {
    Dog a;
    a.SetAge(5);
    return 0;
}
