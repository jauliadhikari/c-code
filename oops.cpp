#include<iostream>
using namespace std;
class parent
{   
    public:
	int x;
	parent()
	{
		x=3;
	}
	void p1()
	{
		cout<<" p1 is here "<<endl;
	}
	void p1(int x)
	{
		cout<<" p1 is here with an integer "<<x<<endl;
	}
	void p1(char t)
	{
		cout<<"p1 is here with char "<<t<<endl;
	}
	int p1(int x,int y)
	{   int sum;
		sum =x+y;
		return sum;
	}
	void p1(int x,char y)
	{
		cout<<"p1 is here with char and int"<<endl;
	}
};
int main()
{   int sum;
	parent obj;
	obj.p1();
	obj.p1(9);
	obj.p1('p');
	sum = obj.p1(4,5);
	cout<<sum<<endl;
	obj.p1(6,'p');
}



