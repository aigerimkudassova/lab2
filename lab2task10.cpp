#include <iostream>
#include <cmath>
using namespace std;
int main()
{

cout<<"Enter the leg and hypotenuse"<<endl;
double a,b,c,r,p;
cin>>a>>c;

b=sqrt(c*c-a*a);
p=(a+b+c)/2;
r=sqrt(((p-a)*(p-b)*(p-c))/p);

cout<<"b= "<<b<<endl;
cout<<"r= "<<r<<endl;


system("pause>nul");
return 0;
}
