#include <iostream>
#include <cmath>
using namespace std;
int main()
{

cout<<"Enter the sides of triangle"<<endl;
double a,b,c,S,p,ha,hb,hb;
cin>>a>>b>>c;

p=(a+b+c)/2;
S=sqrt(p*(p-a)*(p-b)*(p-c));

ha=2*S/a;
hb=2*S/b;
hc=2*S/c;

cout<<"ha= "<<ha<<endl;
cout<<"hb= "<<hb<<endl;
cout<<"hc= "<<hc<<endl;

system("pause>nul");
return 0;
}
