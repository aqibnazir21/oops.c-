#include<iostream>
using namespace std;
 enum etype {labourer,secretry,manager,accountant,executive,researcher};     //declare any data type of etype.
class employe
{
	int e_num;
	float c_num;
	public:
		void gete_num()
		{
			cout<<"enter employe num\n";
			cin>>e_num;
		}
	    void getc_num()
	    {
	    	cout<<"enter compensation num\n ";
	    	cin>>c_num;
		}
		void showdata()
		{
			cout<<"\nemploy number ="<<e_num<<endl<<"compentation number ="<<c_num;
		}
};
class date
{
	int day;int month;int year;
	char ch;
//	etype te;                               //declared of etype
	public :
		void fdate()
		{
			cout<<"\nenter date when employ is hired\n dd-mm-yy\n";
			cin>>day>>month>>year;
		}
		void geterank()
        {
        	cout<<"\nenter employee type's first alphabet\n  "
        	<<"labourer,secretry,manager,accountant,executive,researcher\n "<<" ";
        	cin>>ch;
        }
		void showfdate()
		{
			cout<<"\ndate =";
			cout<<day<<"/"<<month<<"/"<<year;
			cout<<"\nemploy type is";
			switch(ch)
			{
				case 'l':
					cout<<" labourer";
					break;
					case 's':
					cout<<"secretry";
					break;
					case 'm':
					cout<<" manager";
					break;
					case 'a':
					cout<<"accountant";
					break;
					case 'e':
					cout<<"executive";
					break;
					case 'r':
					cout<<"researcher";
					break;
		}
		}
};

int main()
{
	employe e1;
	date d1,d2,d3;
	e1.gete_num();
	e1.getc_num();
    d1.fdate();
	d1.geterank();
	e1.showdata();
	d1.showfdate();
}