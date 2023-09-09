#include<iostream>
using namespace std;
#include<math.h>
int main()
{
int x1=1,x2=2,x3=3;
int y1=1,y2=2,y3=3;
if((y2-y1)/(x2-x1)==(y3-y2)/(x2-x1))
cout<<"Points are in straight line";
else
cout<<"Points are not in straight line";
return 0;
}