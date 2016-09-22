#include <iostream>
#include <cmath>
using namespace std;
int main()
{
cout<<"Enter three numbers"<<endl;
double x,y,z,a,b,e;
cin>>x>>y>>z;

e=2.72;
a=(1+y)*((x+y/(x*x+4))/(pow(e,-2-x)+1/(x*x+4)));
b=(1+cos(y-2))/(pow(x,4)/2+sin(z)*sin(z));

cout<<"a= "<<a<<endl;
cout<<"b= "<<b<<endl;
 

system("pause>nul");
return 0;
}