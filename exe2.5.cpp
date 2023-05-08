#include<iostream>
#include<ctype.h>
using  namespace std;
int main()
{
	char v;
	int  iv;
	cout<<"enter the variable"<<endl;
	cin>>v;
	iv= v;  
	islower(v);                          // islower takes a single variable and A Library function
	cout<<iv<<endl;
	return 0;
}
