#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str[3]={"flower","flow","flu"};
	
	//[ "hello" , "khello" ,"khalo" , "bhalo"]
	string pf;
	string pf2;
	
	for(int i=0;i<str[0].length();i++)
	{
		if(str[0][i]==str[1][i])
		{
			pf = pf + str[0][i];
		}
	}

	for(int i=0;i<str[2].length();i++)
	{
		if(pf[i]==str[2][i])
		{
			pf = pf + str[2][i];
		}
	}
	cout<<pf<<endl;
}
