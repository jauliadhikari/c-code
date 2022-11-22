#include<iostream>
using namespace std;
int main()
{
	int i,j;

	cout<<"hello world: "<<endl;
	
	cin>>i;
	
	try
	{
		cin>>j;
		if(j==0)
		{
			throw j;
			cout<<"huhihih"<<endl;
		}
		else
		{
			cout<<i/j<<endl;
		
		}
	
	}
	catch(int j)
	{
		cout<<"j can never be zero  : "<<endl;
		
	}
	
	
}
