#include<iostream>
#include<string>
using namespace std;
int main()
{   
    char temp;
	string str;
	//string st;
	getline(cin,str);
	for(int i=0;i<str.length();i++)
	{   temp=str[i];
		for(int j=i+1;j<str.length();j++)
		{
			if(temp==str[j])
			{
				str[j]=' ';
			}
		}
	}cout<<"dub char "<<str<<endl;
}
