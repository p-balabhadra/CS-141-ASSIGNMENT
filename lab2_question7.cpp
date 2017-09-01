#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << endl;

    int angle1,angle2,angle3 ;

    cout << "enter the 1st angle of the tangle" << endl ;
    cin >> angle1 ;
    cout << endl;

    cout << "enter the 2nd angle of the tringle " << endl ;
    cin >> angle2 ;
    cout << endl;


    angle3=180-(angle1+angle2);

    cout << "the 3rd angle of triangle = " << angle3 << endl;


    return 0;
}
