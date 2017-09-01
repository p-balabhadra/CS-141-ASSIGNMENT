#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, user!" << endl;

    cout << endl;

    float P,T,R,Isim ;

    cout << "enter the principle amount " << endl ;
    cin >> P ;
    cout << endl;

    cout << "enter the interest rate per period " << endl ; // rate in percentage
    cin >> R ;
    cout << endl;

    cout << "enter the time for which the money is borrowed or lent" << endl ; // time in year
    cin >> T;
    cout << endl;

    Isim=(P*T*R)/100; // interest rate in percentage , so we have to divide R by 100

    cout << "the simple interest for the money is borrowed or lent  = " << Isim << endl;

    return 0;
}
