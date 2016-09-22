#include <iostream>
#include <cmath>
using namespace std;
int main()
{

cout<<"Enter the length of bases and the angle"<<endl;
double a,b,w,h,p,S;
cin>>a>>b>>w;

p=3.14;
h=(((abs(a-b))/2)*tan(w*p/180));
S=((a+b)*h)/2;

cout<<"S= "<<S<<endl;

system("pause>nul");
return 0;
}


