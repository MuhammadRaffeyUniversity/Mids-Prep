// find duplicate element in an array
#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Outer loop to pick each element
    for (int i = 0; i < n; i++)
    {
        // Inner loop to compare the picked element with the rest
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "Duplicate element is: " << arr[i] << endl;
                break; // Break inner loop after finding the duplicate
            }
        }
    }
    return 0;
}
