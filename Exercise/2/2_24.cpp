#include<cstdio>
const double PI = 3.1415926;

int main() {
    double r;
    scanf("%lf", &r);
    printf("%.3lf\n%.3lf\n", PI * r * r, 2 * PI * r);
    return 0;
}