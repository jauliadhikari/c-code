#include<iostream>
using namespace std;
void table(int x)
{   
	static int i =1;
	
	if(i==11)
	{
		return;
	}
	
	cout<<x<<" * "<<i<<" times is "<<x*i<<endl;
	i++;
	table(x);
	
}
int main()
{
	int x;
	cin>>x;
	
	table(x);
}
