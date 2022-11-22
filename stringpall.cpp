#include<iostream>
using namespace std;
bool strpal(string str)
{
	int s=0;
	int e=str.size()-1;
	while(s<=e)
	{
		if(str[s++]!=str[e--])
		{
			return false;
		}
	}
	return true;
	
}
int main()
{
	string str;
	cin>>str;
	if(strpal(str)==true)
	{
		cout<<"pal"<<endl;
	}
	else
	{
		cout<<"not pal"<<endl;
	}
}
