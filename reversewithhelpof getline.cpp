#include<bits/stdc++.h>
using namespace std;
void rev(string &str,int s,int e)
{
	
	while(s<=e)
	{
		swap(str[s++],str[e--]);
	}
}

void revs(string &str)
{  
    int l=0,f=0;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]==' ')
		{   
		    
		    l=i-1;
			rev(str,f,l);
			f=i+1;
		}
			
			if(i == str.size()-1)
			{
				
				rev(str,f,i);
			}
		
	}
}

int main()
{
	string str;
	cout<<"enter string"<<endl;
	getline(cin,str);
	
	revs(str);
	cout<<str<<endl;
}
