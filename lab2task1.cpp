#include <iostream>
#include <cmath>
using namespace std;
int main()
{

cout<<"Enter the magnitudes of sides"<<endl;
double a,b,c,p,s,v,h;
cin>>a>>b>>c;
p=(a+b+c)/2;
s=sqrt(p*(p-a)*(p-b)*(p-c));

cout<<"Enter the hight"<<endl;
cin>>h;

v=(s*h)/3;

cout<<"p="<<p<<endl;
cout<<"s="<<s<<endl;
cout<<"v="<<v<<endl;

system("pause>nul");
return 0;
}