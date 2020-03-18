#include <iostream>
using namespace std;
class Integer {
public:
//构造函数
    Integer(int num) {
        _num = num;
    }
    int getNum() {
        return _num;
    }
//计算当前Integer 和 b之间的最大公约数
    int gcd(Integer b);

private:
    int _num;
};

int Integer:: gcd (Integer b) {
    int x = _num, y = b.getNum();
    int z = y;
    while (x % y) {
        z = x % y;
        x = y;
        y = z;
    }
    return z;
}

int main(){
    int a, b;
    cin >> a >> b;
    Integer A(a);
    Integer B(b);
    cout << A.gcd(B) << endl;
    return 0;
}