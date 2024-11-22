// Enter 5 Number but display only first and last
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "First number is: " << arr[0] << endl;
    cout << "Last number is: " << arr[4] << endl;
    return 0;
}
