#include <iostream>
using namespace std;
 


template <class T>
int BinSearch(T arr[], int low, int high, T key) {
    if (low <= high) {
        int mid = (low + high) / 2;
        cout << mid << endl;
        if(key == arr[mid])
            return mid;
        else if(key < arr[mid])
            return BinSearch(arr, low, mid - 1, key);
        else if(key > arr[mid])
            return BinSearch(arr, mid + 1, high, key);
    }
    else
        return -1;
}
 
template <class T>
void binSearch(T arr[], int n, T key) {
    BinSearch(arr, 0, n - 1, key);
}
/*请实现折半查找，并按顺序输出被访问的元素下标*/
 
int main()
{
       int n, m;
       int key1;
       double key2;
       cin >> n >> m >> key1 >> key2;
       int* arr_int = new int[n];
       double* arr_double = new double[m];
       for (int i = 0; i < n; ++i)
              cin >> arr_int[i];
       for (int i = 0; i < m; ++i)
              cin >> arr_double[i];
       binSearch(arr_int, n, key1);
       binSearch(arr_double, m, key2);
       return 0;
}