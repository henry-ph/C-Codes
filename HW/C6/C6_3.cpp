#include<iostream>
#include<algorithm>

using namespace std;

const int N = 5e3 + 5;
int a[N];

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a + n);
    cout << a[k - 1] << endl;
    return 0;
}