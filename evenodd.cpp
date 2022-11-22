#include<iostream>
using namespace std;
int main()
{   int num;
    int i=0;
    while(i<10)
    {
	cout<<"enter a digit u wanna check odd or even:"<<endl;
	cin>>num;
	if(num%2==0)
	{
		cout<<"even:"<<endl;
	}
	else
	{
		cout<<"odd"<<endl;
	}
	i++;
    }
}
