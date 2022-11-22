#include<bits/stdc++.h>
using namespace std;
void rev(string &str1)
{
	int s=0;
	int e=str1.size()-1;
	
	while(s<=e)
	{
		swap(str1[s++],str1[e--]);
	}
}
bool is_pal(string str1,string str2)
{
	for(int i=0;i<str1.size();i++)
	{
		if(str1[i]!=str2[i])
		{
			
			return false;
		}
	
	}
	return true;
}
int main()
{
	string str1,str2;
	cout<<"enter string"<<endl;
	cin>>str1;
	str2=str1;
	rev(str1);
	if(is_pal(str1,str2)==true)
   {
   	cout<<"palindrome"<<endl;
   }
   else
   {
   	cout<<"not pal"<<endl;
   }
}
