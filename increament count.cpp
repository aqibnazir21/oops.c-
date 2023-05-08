#include<iostream>
using namespace std;
class counter
{
    static	int count;         //for numericle order(123) static must be used.
    int i;
	public:
		counter()             //no semicolon and () r important :
		{
			count++;
			cout<<"i am object number ";
			cout<<count<<endl;
		}

	int showdata()
	{
	//	cout<<i<<endl;
		cout<<count<<endl;
		return count;
	}
};
int counter::count(0);
int main()
{
	counter c1,c2,c3,c4;

//	c1.showdata();
	c4.showdata()
;}










 