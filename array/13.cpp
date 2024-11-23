// insert element at a specific position in an array
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arrCopy[6];
    int pos = 2;
    int newElement;

    for (int i = 0; i < pos; i++)
    {
        arrCopy[i] = arr[i];
    }

    cout << "Enter the new element: ";
    cin >> newElement;
    arrCopy[pos] = newElement;

    for (int i = pos; i < 5; i++)
    {
        arrCopy[i + 1] = arr[i];
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arrCopy[i] << " ";
    }
    cout << endl;

    return 0;
}