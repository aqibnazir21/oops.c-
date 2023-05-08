#include<iostream>
using namespace std;
#include<conio.h>
 //enum etype { laborer, secretry, manager, accountent, executive, researcher };
int main()
{
	char del='x';
	cout<<"enter\n";
	del=getche();
	switch(del)
	{
	
		case 'l':
			cout<<"\nlaborer\n";
			break;
		case 's':
		cout<<"\nsecretry";
			break;
			case 'm':
		cout<<"\n manager";
			break;
			case 'a':
		cout<<"\n accountent";
			break;
			case 'e':
		cout<<"\n executive";
			break;
			case 'r':
		cout<<"\n researcher";
			break;
		default:
		cout<<"dne";
		break;	    	
	}
	
}