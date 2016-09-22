#include <iostream>
#include <cmath>
using namespace std;
int main()
{
cout<<"Enter the sides of triangle"<<endl;
double a,b,c,la,lb,lc;
cin>>a>>b>>c;

la=(sqrt(b*c*((b+c)*(b+c)-a*a)))/(b+c);
lb=(sqrt(a*b*((a+b)*(a+b)-c*c)))/(a+b);
lc=(sqrt(a*c*((a+c)*(a*c)-b*b)))/(a+c);

cout<<"la= "<<la<<endl;
cout<<"lb= "<<lb<<endl;
cout<<"lc= "<<lc<<endl;

system("pause>nul");
return 0;
}
