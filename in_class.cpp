#include <iostream>
#include <cstring>
using namespace std;
class A{
public:
    virtual void fun();
};
int main(int argc, const char * argv[]) {
    cout << sizeof(A) << endl;
    return 0;
}