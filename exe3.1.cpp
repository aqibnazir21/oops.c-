#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i,j,n;
	n=7;
//	for(j=1;j<=3;j++)
	{
		for(i=1;i<=90;i++)
		{
			cout<<left<<setw(5)<<i*n;
			if(i%10==0)
		cout<<endl;	
			
		}
	//	cout<<endl;
	}
}
