#include<iostream>
using namespace std;
int main()
{
	int num,check=0;
	cout<<"check number is prime or not"<<endl;
	cin>>num;
	for(int j=2;j<=num;j++)
	{
		if(num%j==0)
		{
			check=1;
			break;
		}
	}
	if(check==0)
	{
		cout<<num<<" prime"<<endl;
	}
	else
	{
		cout<< num <<" is not prime "<<endl;
	}
	return 0;
	
}
