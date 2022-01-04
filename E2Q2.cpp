// reverse of the number
#include <iostream>
using namespace std;
int Rever_se (int);
int main()
{
    int i;
    cout << "Enter the number"<<endl;
    cin >>i;
    cout <<"Reverse of "<< i << "is =:  " <<Rever_se(i)<< endl;
}
int Rever_se(int i)
{
    int rev = 0,rem;
      while (i != 0)
{
    rem = i % 10;
    rev = rev * 10 + rem;
    i = i / 10;
}
    return rev;
}