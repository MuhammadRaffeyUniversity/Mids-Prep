// delete an element from an array
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int x = 3;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == x)
        {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}
