#include <iostream>
#include<cmath>
using namespace std;
 
class Integer{
public:
//Integer类构造函数
    Integer(int num) : _num(num){};
    //反转_num
    int inversed();
    int getLength(); //getLength()函数获取_num长度
private: 
    int _num;
};

int Integer:: getLength() {
    int x = _num, ans = 0;
    while(x) {
        ans++;
        x /= 10;
    }
    return ans;
}

int Integer:: inversed() {
    int ans = 0, len = getLength(), x = _num;
    while (len) {
        int tmp = x % 10;
        ans += tmp * pow(10, len - 1);
        len--;
        x /= 10;
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    Integer integer(n);
    cout << integer.inversed() << endl;
}