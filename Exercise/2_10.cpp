#include<iostream>
using namespace std;

int main() {
    int a, b;
    char opr;
    cin >> a >> b >> opr;
    switch (opr) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            printf("%d\n", a / b);
            break;
        case '%':
            printf("%d\n", a % b);
            break;
    }
    return 0;
}