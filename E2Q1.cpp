#include <iostream>
using namespace std;
int Find_sum (int);
int main()
{
    int i;
    cout <<"Enter the number" << endl;
    cin >> i; 
    cout << "sum of digits of "<< i <<" is :  " <<Find_sum (i) << endl; 
}
    int Find_sum(int i)
    {
        int y,sum = 0;
    while (i != 0)
    {
       y = i % 10;              // if u want to return sum of even digits of a number then use << if (y%2 == 0)  
       sum = sum + y;
       i = i / 10;
    }
   
    return sum;
}