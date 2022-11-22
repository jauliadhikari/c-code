#include<iostream>
using namespace std;
int main()
{
	int x,y,sub;
	cout<<"enter value of y"<<endl;
	cin>>y;
	
	cout<<"enter value of x"<<endl;
	try
	{
		cin>>x;
		if(x<y)
		{
			throw x;
			cout<<"x should be greater than y"<<endl;
		}
		else
		{
			sub=x-y;
			cout<<sub;
		}
		
    }
    catch(int x)
    {
    	cout<<"x should be greater than y"<<endl;
	}
}
