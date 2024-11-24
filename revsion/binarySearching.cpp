#include <iostream>
using namespace std;

int main()
{
    // Array of sorted numbers (toys in order)
    int toys[] = {7, 3, 1, 6, 4, 2, 5};
    int size = sizeof(toys) / sizeof(toys[0]); // Total number of toys in the array
    // bubble sort
    // for (int i = 0; i < size - 1; i++)
    // {
    //     for (int j = 0; j < size - i - 1; j++)
    //     {
    //         if (toys[j] > toys[j + 1])
    //         {
    //             int temp = toys[j];
    //             toys[j] = toys[j + 1];
    //             toys[j + 1] = temp;
    //         }
    //     }
    // }
    // insert sort
    for (int i = 1; i < size; i++)
    {
        int key = toys[i];
        int j = i - 1;
        while (j >= 0 && toys[j] > key)
        {
            toys[j + 1] = toys[j];
            j = j - 1;
        }
        toys[j + 1] = key;
    }

    // The toy we are searching for
    int favoriteToy = 7;

    // Binary search variables
    int left = 0;         // Start of the array (first box)
    int right = size - 1; // End of the array (last box)
    int middle;           // Middle of the current range
    bool found = false;   // Flag to check if the toy is found

    // Perform binary search
    while (left <= right)
    {
        // Calculate the middle index
        middle = left + (right - left) / 2;

        // Check if the middle element is the favorite toy
        if (toys[middle] == favoriteToy)
        {
            cout << "Toy found at position " << middle << endl;
            found = true;
            break; // Exit the loop as we found the toy
        }

        // If the favorite toy is greater, look in the right half
        if (toys[middle] < favoriteToy)
        {
            left = middle + 1; // Move the left boundary to the right of middle
        }
        // Otherwise, look in the left half
        else
        {
            right = middle - 1; // Move the right boundary to the left of middle
        }
    }

    // If the toy was not found
    if (!found)
    {
        cout << "Toy not found!" << endl;
    }

    return 0;
}
