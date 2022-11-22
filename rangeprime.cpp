#include<iostream>
using namespace std;
int main()
{   int size,count=0;
    cout<<" enter last number "<<endl;
    cin>>size;
	for(int i=2;i<=100;i++)
	{
		for(int j=2;j<=size;j++)
		{
			if(i%j==0)
			{
			 count=count+1;
			}
		}
	
	}
	if(count==1)
	{
		cout<<"prime"<<endl;
	}                         
	else
	cout<<"not prime"<<endl;
	
}
