#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	float r,pi,x,y,theta;
	cout<<"enter the radius of polar coordinate =";
	cin>>r;
	cout<<"\nenter the degrees of an angle =";
	cin>>theta;
	pi=3.14;
	theta =theta*pi/180.0;
	x=r*cos(theta);
	y=r*sin(theta);
	cout<<"\n the x coordinate is ="<<x;
	cout<<"\n the y coordinate is ="<<y;
}