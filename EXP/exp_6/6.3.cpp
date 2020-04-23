#include<iostream>

using namespace std;

int main() {
    char *a = "When you in Rome, ", *b = "do as the Romans do.";
    char c[30];
    int cnt = 0, tot = 0;
    while (true) {
        if (a[cnt] == '\0')
            break;
        c[cnt] = a[cnt];
        cnt++;
    }
    while (true) {
        if (b[tot] == '\0')
            break;
        c[cnt + tot] = b[tot];
        tot++;
    }
    cout << c << endl;
    return 0;
}