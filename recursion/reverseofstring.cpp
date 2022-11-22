#include<bits/stdc++.h>
using namespace std;
void rev(string &str,int s,int e)
{  
	if(s>e)
	{
		return ;
	}
	swap(str[s],str[e]);
	s++;
	e--;
	
	rev(str,s,e);
}

int main()
{
	string str;
	cin>>str;
	int sizee=str.size();
	rev(str,0,sizee-1);
	cout<<str<<endl;
}
