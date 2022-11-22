#include<iostream>
using namespace std;
void rev(int x)
{
	if(x==0)
	{
		return ;
	}
	cout<<x<<endl;
	
	rev(x-1);
	
}

int main()
{
	int x;
	cin>>x;
	
	rev(x);
	
}
