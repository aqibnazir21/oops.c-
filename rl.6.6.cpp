#include<iostream>
using namespace std;
class date
{
	private :
		int m,d,y;
	
	public :
		void setdate()
		{
			cout<<"enter date (mm/dd/yy)"<<endl;
			cin>>m>>d>>y;
		}
		void showdate()
		{
			cout<<m<<"/"<<d<<"/"<<y;
		}
};
int main()
{
	date d1,d2;
	d1.setdate();
	d1.showdate();
}