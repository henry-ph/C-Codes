#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
set<int> vis;
map<int, int> num;

int main() {
    int n, ans, pre = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int tmp;
        scanf("%d", &tmp);
        vis.insert(tmp);
        num[tmp]++;
    }
    ans = *vis.begin();
    set<int>::iterator it;
    for (it = vis.begin(); it != vis.end(); ++it) {
        if(num[*it] > pre) {
            ans = *it;
            pre = num[*it];
        }
    }
    printf("%d\n", ans);
    return 0;
}