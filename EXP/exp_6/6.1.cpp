#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int a[3][3] = {{1, 2, 3},
               {4, 5, 6},
               {7, 8, 9}};

void Transfer(int (*a)[3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = i; j < 3; ++j)
        {
            swap(a[i][j], a[j][i]);
        }
    }
    return;
}

void print()
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
    Transfer(a);
    print();
    return 0;
}