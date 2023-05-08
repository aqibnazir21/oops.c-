#include<iostream>
using namespace std;
class employe
{
	private:
		int enum1;
		float ecomp;
	public:
		void setdata()
		{
			cout<<"enter employe number ";
			cin>>enum1;
			cout<<"enter employe compensaton number";
			cin>>ecomp;
		}
		void showdata()
		{
			cout<<enum1<<endl;
			cout<<ecomp<<endl;
		}
};
int main()
{
	employe e1,e2,e3;
	e1.setdata();
	e2.setdata();
	e3.setdata();
	e1.showdata();
	e2.showdata();
	e3.showdata();
}