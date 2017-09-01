#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Hello, user!" << endl;
    cout << endl;

    float P,T,R,Icom;

    cout << "enter the principle amount " << endl ;
    cin >> P ;
    cout << endl;

    cout << "enter the interest rate per period " << endl ; // rate in percentage
    cin >> R ;
    cout << endl;

    cout << "enter the time for which the money is borrowed or lent" << endl ; // time in year
    cin >> T;
    cout << endl;

    Icom=P*(pow((1 + R / 100), T) - 1);



    cout << "the compound interest for the money is borrowed or lent  = " << Icom << endl;

    return 0;
}
