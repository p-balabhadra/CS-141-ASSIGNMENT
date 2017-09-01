#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "hello , user " <<  endl ;
    cout << endl ;
    float base, exponent, result;

    cout << "Enter base = " << endl;
    cin >> base ;
    cout  << endl;

    cout << "enter exponent = " << endl ;
    cin >>  exponent ;
    cout << endl ;


    result = pow(base, exponent);

    cout << base << "^" << exponent << " = " << result << endl ;

    return 0;
}
