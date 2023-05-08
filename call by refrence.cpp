#include<iostream>
using namespace std;
int x;
int& sum();
int main()
{
	sum()=90;
	cout<<" x=  "<<x<<endl;
	return 0;
}
int& sum()
{
	return x;
}