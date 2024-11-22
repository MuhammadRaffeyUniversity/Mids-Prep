// Display only alphabets
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char arr[50];
    cout << "Enter a String: ";
    cin.getline(arr, 50);

    cout << "\n-------------------------------------\n";
    for (int i = 0; i < 50 && arr[i] != '\0'; i++)
    {
        if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z'))
        {
            cout << arr[i];
        }
    }
    cout << endl;

    return 0;
}