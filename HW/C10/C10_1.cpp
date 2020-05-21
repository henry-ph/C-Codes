#include<iostream>
#include<map>
#include<utility>

using namespace std;

int main() {
    map<string, int> G;
    string s;
    while (cin >> s) {
        if (s == "QUIT") {
            break;
        }
        cout << G[s] << endl;
        G[s]++;
    }
    return 0;
}