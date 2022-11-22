#include<iostream>
using namespace std;
char solve(string str)
{
	int count=0;
	for(int i=0;i<str.size();i++)
	{    count=0;
		for(int j=0;j<str.size();j++)
		{
	      if(str[i]==str[j])
	      {
	      	count++;
		  }
		  
		}	
		if(count==1)
		{
			return str[i];
		}	
	}
	
}

int main()
{
	string str="anshika";
	char ch=solve(str);
	cout<<ch;
}
