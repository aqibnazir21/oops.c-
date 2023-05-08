#include<iostream>
using namespace std;
int main()
{
	long int a,rnum;
	rnum=0;
	int num;
	cout<<"enter the 3 digit  number = ";
	cin>>num;
	
	a=num%10;
	num=num/10;
	rnum=rnum+a*100;
	
	a=num%10;
	num=num/10;
	rnum=rnum+a*10;
	
	a=num%10;
	num=num/10;
	rnum=rnum+a*1;
	
	cout<<"the reverse number is= "<<rnum;
	
/*	if( num==rnum )
	cout<<"\n not same";
	else
	cout<<"\n  same";
*/	
	return 0;
}