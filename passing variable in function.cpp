#include<iostream>
using namespace std;
void pascons(char ,int);
int main()
{
	int i;
	char ch='a';
	cout<<"enter int\n";
	cin>>i;
	cout<<"enter char\n";
	cin>>ch;
	 pascons(ch,i);
}
void pascons(char ch ,int i)
 {
 	int j;
 	for(j=1;j<=5;j++)
 	cout<<ch;
 	cout<<endl;
 	cout<<i;
 }