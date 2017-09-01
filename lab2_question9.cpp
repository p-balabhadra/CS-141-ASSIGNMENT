#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, user!" << endl;
    cout << endl;

    float length , area, sqrt3=1.732;

    cout << "enter the length of any side of the equilateral tangle" << endl ; // as all sides are equal in equilateral triangle
    cin >> length;
    cout << endl;


    area=(sqrt3*length*length)/4;

    cout << "the area of triangle = " << area << endl;
    return 0;
}
