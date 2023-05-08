#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	float x,y,r,theta,pi,angle;
	pi=3.14;
	cout<<"enter the value of x & y=\n";
	cin>>x>>y;
	r=sqrt(x*x+y*y);
	theta=tan(y/x);
	angle=theta*(180/pi);
	cout<<r<<endl<<angle;
}