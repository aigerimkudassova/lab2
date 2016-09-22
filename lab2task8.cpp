#include <iostream>
#include <cmath>
using namespace std;
int main()
{


cout<<"Enter three resistnces"<<endl;
double R1,R2,R3,D,R;
cin>>R1>>R2>>R3;



D=(1/R1)+(1/R2)+(1/R3);
R=1/D;
cout<<"R= "<<R<<endl;


system("pause>nul");
return 0;
}
