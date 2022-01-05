// area of triangle using heron's formula
#include <iostream>
#include <cmath>
using namespace std;
float area_of_triangle(float,float,float);
float perim_eter(float,float,float);
int main()
{
  float a,b,c,area,per;
  cout << "Enter the length of sides"<<endl;
  cin >>a>>b>>c;
  area = area_of_triangle(a,b,c);
  cout << "Area = "<<area << endl;
  per = perim_eter(a,b,c);
  cout << "perimeter of triangle is "<< per <<endl;
  return 0;
}
float area_of_triangle(float a ,float b ,float c)
{
      float s,ar;
      s = (a+b+c)/2;
      ar = sqrt(s * (s-a) * (s-b) * (s-c));           // area is being found using heron's formula
    return ar;
}
float perim_eter(float a, float b , float c)
{
    return (a+b+c);
}