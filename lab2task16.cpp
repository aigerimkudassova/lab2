#include <iostream>
#include <cmath>
using namespace std;
int main()
{

cout<<"Enter the coordinates of two points"<<endl;
double x1,y1,x2,y2,l;
cin>>x1>>y1>>x2>>y2;

l=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
cout<<"l= "<<l<<endl;


system("pause>nul");
return 0;
}