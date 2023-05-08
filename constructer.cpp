//constructer
#include<iostream>
using namespace std;
class complex                           //constructer will not be use as obj or constructer.
{
	private:
		int a;
	public:
		complex(int a)
		{
			cout<<"constructer\n";
			a=a*3;
			cout<<a<<endl;	
		}
		complex()
		{
		}	
};
int main()
{
	complex c4(2),c1(4),c2();        //ist c4 will be accessed then c1
	
}