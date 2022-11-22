#include<iostream>
using namespace std;
int table(int times)
{   
	if(times==10)
	{
		return 20;
	}
	else
	{
		cout<<2*times<<endl;
		return table(times+1);
	}
	
}
int main()
{
	cout<<table(1);
}
