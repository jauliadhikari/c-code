#include<string>
#include<iostream>
using namespace std;

void rev(string &str)
{
	int s=0;
	int e=str.size()-1;
	
	while(s<=e)
	{
		swap(str[s++],str[e--]);
	}
}

int main()
{
	string str;
	cout<<"enter string"<<endl;
	cin>>str;
	rev(str);
	cout<<str<<endl;
	
	
	
}
