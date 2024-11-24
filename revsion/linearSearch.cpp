#include <iostream>
using namespace std;

int main()
{
    int toys[] = {1, 2, 3, 4, 5};
    int favoriteToy = 3;
    int size = sizeof(toys) / sizeof(toys[0]);
    bool found = false;

    for (int i = 0; i < size; i++)
    {
        if (toys[i] == favoriteToy)
        {
            found = true;
            cout << "Toy found at position " << i << endl;
            break;
        }
    }

    if (!found)
    {
        cout << "Toy not found!" << endl;
    }

    return 0;
}
