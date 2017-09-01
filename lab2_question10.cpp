#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, user " << endl;
    cout << endl;

    float mark1,mark2,mark3,mark4,mark5,total,average,percentage;

    cout << "enter the secured mark in physics" << endl ;
    cin >> mark1 ;
    cout << endl ;

    cout << "enter the secured mark in chemistry" << endl ;
    cin >> mark2 ;
    cout << endl ;

    cout << "enter the secured mark in mathematics" << endl ;
    cin >> mark3 ;
    cout << endl ;

    cout << "enter the secured mark in biology" << endl ;
    cin >> mark4 ;
    cout << endl ;

    cout << "enter the secured mark in computer science" << endl ;
    cin >> mark5 ;
    cout << endl ;

    total=mark1+mark2+mark3+mark4+mark5;
    average=total/5;
    percentage=(total/500)*100;

    cout << "the total mark secured in the exam = " << total << endl;
    cout << "the average mark = " << average << endl ;
    cout << "the percentage = " << percentage << " %" << endl;

    cout << endl;

    return 0;
}
