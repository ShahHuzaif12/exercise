#include <iostream>
using namespace std;
int lo_pro(float, float);
int main()
{
    float cp,sp;
    cout <<"Enter the COST PRICE and SELLING PRICE"<<endl;
    cin >> cp >> sp;

    lo_pro(cp, sp); // function calling
}
int lo_pro(float cp, float sp)
{
float profit, loss;
 profit = sp - cp; // profit = selling price - cost price
 if (profit > 0)
 {
     cout << "seller has made profit of rupees  " << profit << endl;
 }
 else if (profit < 0)
 {
     cout << "Seller has incurred loss of rupees " << -(profit) <<endl;
 }
 else if (profit == 0)
 {
     cout <<"seller has neither made profit nor incurred loss"<<endl;
 }
}