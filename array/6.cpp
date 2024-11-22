// Largest Number
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[10] = {10, 23, 32, 45, 67, 89, 90, 12, 34, 56};
    int largest = 0;
    for (int i = 0; i < 10; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }
    cout<<"Largest number is: "<<largest<<endl;
    return 0;
}
