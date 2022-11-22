#include<bits/stdc++.h>
using namespace std;
int  count(string str)
{
	int num=1;                         
	
	for(int i=0;i<str.size();i++)
	{
		if(str[i]==' ')
		{
			num++;
		}
	}
	return num;
}
int main()
{
	string str;
	cout<<"enter the string"<<endl;
	getline(cin,str);
	
	cout<<"number of words are--->>>"<<count(str)<<endl;
	
}
