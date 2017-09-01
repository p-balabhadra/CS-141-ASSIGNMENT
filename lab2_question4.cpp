#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, user!" << endl;

    int year,week,day;

    cout<<"Enter No. of days:" << endl;
    cin>> day ;

    year=day/365;
    day=day%365;
    week=day/7;
    day=day%7;

    cout << endl ;


    cout<<"Years: "<<year<< endl <<"Weeks: "<<week<< endl <<"Days: "<<day;
    cout << endl ;

    return 0;
}
