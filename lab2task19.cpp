#include <iostream>
#include <cmath>
using namespace std;
int main()
{
cout<<"Enter three numbers"<<endl;
double x,y,z,a,b,p;
cin>>x>>y>>z;

p=3.14;
a=(2*cos(x-p/6))/(0.5+sin(y)*sin(y));
b=1+((z*z)/(3+((z*z)/5)));

cout<<"a= "<<a<<endl;
cout<<"b= "<<b<<endl;


system("pause>nul");
return 0;
}