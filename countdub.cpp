#include<bits/stdc++.h>
using namespace std;
void dub(string str)
{  
   
	for(int i=0;i<str.size();i++)
	{    int count=1;
		if(str[i]==str[i+1])
		{
			count++;
		}
		cout<<str[i]<<count<<endl;
	  
	    else
	    {
	    	cout<<str[i+1]<<count<<endl;
		}
		
	}
	
}
int main()
{
	string str;
	cin>>str;
	dub(str);

}
