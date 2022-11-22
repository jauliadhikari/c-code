#include<iostream>
using namespace std;
class adhikari
{
	private:
		int a,b,c;
	public:
		adhikari()
		{
			a=123;
			b=453;
			c=145;
		}
	void display()
	{
		cout<<"my name is jauli adhikari"<<endl;
		cout<<a<<" "<<b<<" "<<c<<" ";
	}	
	friend void print();
};


	
		void print()
		{
				adhikari jauli;
	            jauli.display();
			cout<<"singh is middle name"<<endl;
		}

int main()
{
	print();
	
}
