#include<bits/stdc++.h>
using namespace std;
int side[5];
char ans[2][10] = {"False", "True"};

bool IsRight();

int main() {
    for (int i = 1; i <= 3; ++i)
        cin >> side[i];
    cout << ans[IsRight()] << endl;
    return 0;
}

bool IsRight() {
    sort(side + 1, side + 4);
    if (side[1] * side[1] + side[2] * side[2] == side[3] * side[3])
        return true;
    return false;
}
