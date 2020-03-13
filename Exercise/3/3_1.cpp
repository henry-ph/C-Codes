#include <iostream>
using namespace std;

int hammingWeight(int n) {
    int ans = 0;
    while (n) {
        ans += n & 1;
        n >>= 1;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    cout << hammingWeight(n) << endl;
    return 0;
}