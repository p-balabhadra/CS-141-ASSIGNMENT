#include <iostream>

using namespace std;

int main()
{
     float temperature ;
    cout << "hello, user" << endl;
    cout << "enter temperature in farhenheit" << endl;
    cin >> temperature ;
    cout << endl;
    cout << "temperature in celsius" << endl << "=" << (temperature-32)*5/9 << endl;
    cout <<  endl;

    return 0;
}
