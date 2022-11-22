#include<iostream>
#include<string>
using namespace std;
int main()
{   
    char temp;
	string str;
	string st;
	getline(cin,str);
	for(int i=0;i<str.length();i++)
	{   
	   if(str[i]==str[i+1])
	   {
	   	    st=st+str[i];
	   	   
	   }
	}
	string final;
	for(int i=0;i<st.length();i++)
	{   temp=st[i];
		for(int j=i+1;j<st.length();j++)
		{
			if(temp==st[j])
			{
				final = final+st[j];
			}
			else
			{
				break;
			}
		}
	}
	cout<<final<<endl;
	
	if(final.length() == 0)
	cout<<str<<endl;
	
	cout<<final<<endl;
	
}
