#include <iostream>
#include <cmath>
using namespace std;
int main()
{
cout<<"Enter three numbers"<<endl;
double x,y,z,a,b,e;
cin>>x>>y>>z;

e=2.72;
a=(sqrt(abs(x-1))-pow(abs(y),1/3))/(1+(pow(x,2))/2+(pow(y,2))/4);
b=x*(atan(z)+pow(e,-3-x));

cout<<"a= "<<a<<endl;
cout<<"b= "<<b<<endl;


system("pause>nul");
return 0;
}