#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,r;
	cout<<"enter value of a,b,c,d\n";
	cin>>a>>b>>c>>d;                           //if false then d will print
	r=a<b?c:d;                                 //if a<b condition is true c will print
	cout<<r;
}