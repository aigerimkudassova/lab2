#include <iostream>
#include <cmath>
using namespace std;
int main()
{

cout<<"Enter the sides of triangle"<<endl;
double a,b,c,ma,mb,mc;
cin>>a>>b>>c;

ma=0.5*sqrt(2*(b*b+c*c)-a*a);
mb=0.5*sqrt(2*(a*a+c*c)-b*b);
mc=0.5*sqrt(2*(a*a+b*b)-c*c);


cout<<"ma= "<<ma<<endl;
cout<<"mb= "<<mb<<endl;
cout<<"mc= "<<mc<<endl;

system("pause>nul");
return 0;
}