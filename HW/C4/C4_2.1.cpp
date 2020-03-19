#include<bits/stdc++.h>
using namespace std;
 
class Integer{
public:
    string inversed(string s) {
        reverse(s.begin(), s.end());
        return s;
    }
};
int main() {
    Integer n;
    string s;
    cin >> s;
    cout << n.inversed(s) << endl;
}