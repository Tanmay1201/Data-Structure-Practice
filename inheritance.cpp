#include<iostream>
using namespace std;
class a
{
	int b;
	public:
		int c;
		void getbc()
		{
			cout<<"Enter the values of B and C"<<"\n";
			cin>>b>>c;
		}
		int getb()
		{
			return (b);
		}
		void showb()
		{
			cout<<"b is "<<b<<"\n";
		}
};
class d : private a
{
	int e;
	public:
		void mul()
		{
			getbc();
			e=c*getb();
		}
		void display()
		{
			showb();
			cout<<"c is "<<c<<"\n";
			cout<<"e is "<<e<<"\n";
		}
};
int main()
{
	d q;
	q.mul();
	q.display();
	return 0;
}
