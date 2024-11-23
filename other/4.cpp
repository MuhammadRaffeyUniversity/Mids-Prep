// grading system
#include <iostream>
using namespace std;
void grading(int marks)
{
    if (marks > 91 && marks <= 100)
    {
        cout << "A+\n";
    }

    else if (marks > 81 && marks <= 90)
    {
        cout << "A\n";
    }
    else if (marks > 71 && marks <= 80)
    {
        cout << "B+\n";
    }
    else if (marks > 61 && marks <= 70)
    {
        cout << "B\n";
    }

    else if (marks > 51 && marks <= 60)
    {
        cout << "C+\n";
    }

    else if (marks > 41 && marks <= 50)
    {
        cout << "D\n";
    }
    else
    {
        cout << "F\n";
    }
}
int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    grading(marks);
    return 0;
}
