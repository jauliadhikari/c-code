//  partpartpartpartpaart  art ==? 
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int count =0;
	getline(cin,str);
	for(int i=0;i<str.length();i++)
	{
      if(str[i]=='a' && str[i+1]=='r' && str[i+2]=='t')
      {
      	count++;
	  }
	}
	cout<<count<<endl;
}
