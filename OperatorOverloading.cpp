#include<iostream>
using namespace std;
class a
{
	public :
		int n;
		void input()
		{
			cout<<"enter the value of the n number :"<<endl;
			cin>>n;
			
		}
		void operator ++()
		{
			n=n+5;
		}
		void display()
		{
			cout<<n<<endl;
		}
		
};
int main()
{

	a obj;
	
	obj.input();
	
	obj.operator ++();
	
	obj.display();
	
}
