#include<iostream>
using namespace std;
void revstr(string &str)
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
	cin>>str;
	revstr(str);
	cout<<str;
	
	
}
