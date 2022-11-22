#include<iostream>
#include<string>
using namespace std;
class test
{
	public:
		string name;
		float price;
		int quantity;
		int total,x;
	void input()
	{ cout<<"enter the details:"<<endl;
	  cout<<"enter name: ";
	  cin>>name;
	  cout<<"enter price: ";
	  cin>> price;
	  cout<<"enter quantity: ";
	  cin>>quantity;
	}	
	void output()
	{ 
	cout<<"details : "<<endl;
	total=price*quantity;
	static int bill=0;
	cout<<"name : "<<name<<endl;
	cout<<"price "<<price<<endl;
	cout<<"quantity :"<<quantity<<endl;
	cout<<"total "<<total<<endl;
	bill=bill+total;
	x=bill;
    }
};
int main()
{
	int size;
	cout<<"enter the item numbers"<<endl;
	cin>>size;
	test obj[size];
	
	for(int i =0;i<size;i++)
	{
		obj[i].input();
	}
	for(int i=0;i<size;i++)
	{
		obj[i].output();
	}
	cout<<"total amount to be paid -> "<<obj[size-1].x<<endl;
}
