// delete an element from an array
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arrCopy[5];
    int x = 3;
    int k = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != x)
        {
            arrCopy[k] = arr[i];
            k++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << arrCopy[i] << "\n";
    }

    return 0;
}