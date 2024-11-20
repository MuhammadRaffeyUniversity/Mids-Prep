// Sum and Avg of an Array
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the value " << i << ": ";
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of the array is: " << sum << endl;
    return 0;
}