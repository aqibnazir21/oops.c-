#include<iostream>
using namespace std;
int main()
{
	int r,s,a;
	cout<<"enter the ages "<<endl;
	cin>>r>>s>>a;
	    if(r<s&&r<a)
	cout<<"r is younger\n";
		else if(s<r&&s<a)
	cout<<"s is younger\n";
	//	if(a<s&&a<r)
    	else
	cout<<"a is younger\n";
}