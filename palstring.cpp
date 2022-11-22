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
	string str="paaraap";
	string str1=str;
	rev(str);
	if(str1==str)
	{
		cout<<"yes pal"<<endl;
	}
	else
	{
		cout<<"not pal"<<endl;
	}
}
