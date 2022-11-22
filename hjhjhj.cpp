#include<iostream>
using namespace std;

class table
{
	int n,i;
	public:
		void getdata(void);
		void task(void);
		void display(void);
};
void table::getdata(void)
{
	cout<<"enter the number:";
	cin>>n;
	
}
void table::task()
{
	
	int a;


	for(i=1;i<=10;i++)
	{
		 a=n*i;
	     cout<<n<<"*"<<i<<"="<<a<<endl;     
		
	}
}
/*
void table::display(void)
{
	cout<<"print the table="<<task()<<endl;
}
*/

int main()
{
	table t;
	t.getdata();
	t.task();

	return 0;
}
