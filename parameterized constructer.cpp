
#include<iostream>
using namespace std;
class obj
{
	int a;
	float b;
	public:
		obj(int i,float f)
		{
			a=i;b=f;
			cout <<a<<endl;                    //
			cout<<b<<endl;
			
		}
		
				
};
int main()
{
	obj z1(2,3.14),z2(4,4.13);
	
}