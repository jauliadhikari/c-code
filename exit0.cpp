#include<iostream>
using namespace std;
int main()
{
	int i,j;
	cout<<"hello world : "<<endl;
	cin>>i>>j;
	if(j==0)
	{
		cout<<"bhai sahab neche zero nahi ho sakta : "<<endl;
		cin>>j;
	}
	cout<<i/j;
}
