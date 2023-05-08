#include<iostream>
using namespace std; 
int func(int t);           //here can be any variable or doesn't need.
int func2(int);
int main()
{
	int a=30,b,x;
	func(b);              // agument variable must be decleared.
	cout<<a<<endl;
	func2(x);
}
func(int b)
{
	b=60;                //changing the value of any variable the calling function is not effected
	cout<<b<<endl;
	return 0;
}
func2(int x)
{
	x=1;
	cout<<endl;
	cout<<++x<<x++<<x;    //here the output depends o compiler
	return 0;
}
/*
int func(int a,int b,int c);
int main()
{
	int a,b,c,p;
	cout<<"enter the number\n";
	cin>>a>>b>>c;
	p=func(a,b,c);
	cout<<a<<b<<c<<endl;
}
func(int a,int b,int c)
{
	a=99;
	cout<<a<<b<<c<<endl;
	return 0;
}*/