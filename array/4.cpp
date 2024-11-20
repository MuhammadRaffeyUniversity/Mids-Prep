// largest and Smallest number in an Array
#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 5, 7, 9, 0, 88};
    int largest = 0, smallest = arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
        if (smallest > arr[i])
        {
            smallest = arr[i];
        }
    }
    cout << "The Largest number is: " << largest << "\nThe smallest Number is: " << smallest << endl;
    return 0;
}