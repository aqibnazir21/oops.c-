#include<iostream>
using namespace std;
class obj
{
	static int count;
	public:
		obj()                                       //  constructer
		{
			count++;
			cout<<"i am the object no."<<count<<endl;
		}
};
int obj::count(0);                                 //static data type initialized
int main()
{
	obj o1,o2,o3;
}