// prime number
#include <iostream>
using namespace std;
void prime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not prime\n";
            break;
        }
    }
    if (i == n)
    {
        cout << "Prime\n";
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    prime(n);
    return 0;
}
