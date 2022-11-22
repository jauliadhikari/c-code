#include<iostream>
#include<strings.h>
using namespace std;
class product
{
	public:
		string name;
		int quantity;
		int price;
		int total;
	void input()
	{
		cout<<"enter the name of the product : ";
		cin>>name;
		cout<<"enter the quantity of the product : ";
		cin>>quantity;
		cout<<"enter the price of the product : ";
		cin>>price;
	}
	void output()
	{
		cout<<"NAME "<<name<<endl;
		cout<<"PRICE "<<price<<endl;
		cout<<"QUANRITY "<<quantity<<endl;
		total = price*quantity;
		cout<<"TOTAL  "<<total<<endl;
	}
};
int main()
{
	int nu;
	int j = 0;
	int bill = 0;
	cout<<"enter the numbers of the items you want to give :"<<endl;
	cin>>nu;
	product pro[nu];
	for(int i = 0; i < nu ;i++)
	{
		
		cout<<"Enter the details of the product "<<++j<<endl;
		pro[i].input();
	}
	j=0; 
	for(int i = 0; i < nu ; i++)
	{
		cout<<"Details of the product "<<++j<<endl;
		pro[i].output();
		bill = bill+pro[i].total;
	}
	cout<<"Total Amount to be paid ->"<<bill<<endl;

}
