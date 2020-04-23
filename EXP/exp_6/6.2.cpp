#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

void Transfer(int (*a)[3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = i; j < 3; ++j)
        {
            swap(*(*(a + i) + j), *(*(a + j) + i));
        }
    }
    return;
}

void print(int (*a)[3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}
int main()
{
    int(*a)[3] = new int[3][3];
    int cnt = 0;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            *(*(a + i) + j) = ++cnt;
        }
    }
    Transfer(a);
    print(a);
    return 0;
}