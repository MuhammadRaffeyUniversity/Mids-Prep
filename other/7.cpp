// Circumference and Radius of a circle
#include <iostream>
using namespace std;
void circumference(float r)
{
    cout << "Circumference of the circle is: " << 2 * 3.14 * r << endl;
}
void radius(float r)
{
    cout << "Radius of the circle is: " << 3.14 * r * r << endl;
}

int main()
{
    float r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    circumference(r);
    radius(r);
    return 0;
}
