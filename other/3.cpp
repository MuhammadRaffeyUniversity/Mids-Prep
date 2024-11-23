// print smallest and second smallest element in an array
#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    for (int x = 0; x < n - 1; x++)
    {
        for (int y = 0; y < n - x - 1; y++)
        {
            if (a[y] > a[y + 1])
            {
                int temp = a[y];
                a[y] = a[y + 1];
                a[y + 1] = temp;
            }
        }
    }
}

int main()
{
    int a[] = {5, 4, 3, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);
    bubbleSort(a, n);
    cout << a[n - n] << endl;
    cout << a[n - n + 1] << endl;
    cout << endl;
    return 0;
}