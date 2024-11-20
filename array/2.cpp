//swap first and last element of an array
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp = arr[0];
    arr[0] = arr[size - 1];
    arr[size - 1] = temp;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nnow Without Third Variable\n";
    arr[0] = arr[0] + arr[size - 1];
    arr[size - 1] = arr[0] - arr[size - 1];
    arr[0] = arr[0] - arr[size - 1];
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}