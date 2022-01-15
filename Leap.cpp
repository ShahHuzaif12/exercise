#include <iostream>
using namespace std;
int leap(int);
int main()
{
    int year;
    cout <<"ENter the year"<<endl;
    cin >> year;
    leap(year);
}
int leap (int year)
{
    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    {
    cout << "the " <<year << " is leap year"<<endl;
    }
else 
cout << "The entered year is not a leap year"<<endl;
}