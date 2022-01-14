/*

#include <iostream>
using namespace std;
int odd_even(int);
int main()
{
 int i;
 cout <<"Enter the integer number"<<endl;
 cin >> i;
 odd_even(i);
}
int odd_even(int i)
{
    if (i % 2 == 0)
    {
        cout << i << " is even" <<endl;
    }
    else 
    if(i % 2 != 0)
    {
        cout << i <<" is odd"<<endl;
    }
}
*/
// bitwise AND operator can also be used
#include <iostream>
using namespace std;
int odd_even(int);
int main()
{
 int i;
 cout <<"Enter the integer number"<<endl;
 cin >> i;
 odd_even(i);
}
int odd_even(int i)
{
    if ((i&1) == 1)                       // a number is odd if it has 1 as its rightmost bit in bitwise operator
    cout << i << " is odd"<<endl;   // bitwise AND is done on i and 1. if output is 1, i is odd , otherwise even
    else
    cout << i << " is even"<<endl;
    }