#include<iostream>
using namespace std;
class distance
{
	int feet;
	float inch;
	public:
		void getdata(int ft,float in)
		{
			feet=ft;
			inch=in;
		}
		void showdata()
		{
			cout<<"feet="<<feet<<endl
			    <<"inch="<<inch;
		}
		bool operator<(distance)const
		{
			float bf1=feet+inch/12;
			float bf2=feet+inch/12;
			return(bf1<bf2)?true:false;
		}
};
int main()
{
	distance dist1;
	d1.getdata(3,4.5);
	d2.getdata(3,1.5);
	
}