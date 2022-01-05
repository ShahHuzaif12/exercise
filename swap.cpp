
#include <iostream>
using namespace std;

int main ()
{
    // without 3rd variable::::::::::
    int a,b;
    cout << "enter two numbers"<<endl;
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout <<"After swaping:"<<endl;
    cout <<"a = "<< a<< endl << "b = " <<b<<endl;
    return 0;
}


/*
// using 3rd variable
#include <iostream>
using namespace std;
int main ()
{
    int  a,b,temp;
    cout << "enter two numbers"<<endl;
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
     cout <<"After swaping:"<<endl;
    cout <<"a = "<< a <<endl<< "b = " <<b<<endl;
    return 0;
}
*/