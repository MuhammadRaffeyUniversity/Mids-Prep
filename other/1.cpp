// Funtion Based Calculator
#include <iostream>
using namespace std;

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        cout << "Division by zero is not allowed." << endl;
        return -1.0;
    }
}

int main()
{
    while (true)
    {
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n";
        int choice;
        cin >> choice;
        cout << "\n-------------------------------------------------\n";
        if (choice == 5)
        {
            cout << "Exiting..." << endl;
            break;
        }

        double a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;

        switch (choice)
        {
        case 1:
            cout << "Result: " << add(a, b) << endl;
            break;
        case 2:
            cout << "Result: " << subtract(a, b) << endl;
            break;
        case 3:
            cout << "Result: " << multiply(a, b) << endl;
            break;
        case 4:
            cout << "Result: " << divide(a, b) << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
        cout << "\n-------------------------------------------------\n";
    }

    return 0;
}