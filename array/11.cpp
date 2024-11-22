// odd and even numbers in an array
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " is an even number." << endl;
        }
        else
        {
            cout << arr[i] << " is an odd number." << endl;
        }
    }

    return 0;
}
