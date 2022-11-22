#include<iostream>
using namespace std;
bool is_pal(string str)
{
	int f=0;
	int l=str.length()-1;
	
	while(l>f)
	{
		if(str[f++]!=str[l--])
		{
			return false;
		}
	
	}return true;
}

int main()
{
	string str;
	cin>>str;
	if(is_pal(str)==true)
	{
		cout<<str<<" "<<"palindrome"<<endl;
	}
	else
	{
		cout<<"not palindrome"<<endl;
	}
}
