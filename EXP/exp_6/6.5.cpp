#include<iostream>
#include<string>
using namespace std;

class Employee {
public:
    Employee() : name("N/A"), address("N/A"), city("N/A"), code(0){};
    void changeName(string newName) {
        name = newName;
    }
    void display() const {
        cout << name << endl
             << address << endl
             << city << endl
             << code << endl;
    }

private:
    string name;
    string address;
    string city;
    int code;
};

int main() {
    Employee a[20];
    a[0].changeName("b");
    a[0].display();
    return 0;
}