// addition of two matrix
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr1[2][2], arr2[2][2], arr3[2][2];
    cout << "Enter 4 numbers for first matrix: ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter 4 numbers for second matrix: ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    cout << "Addition of two matrix is: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
