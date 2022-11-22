#include<bits/stdc++.h>
using namespace std;
bool isFind(char k , string s)
{
	for(auto i : s)
	{
		if(k == i)
		 return true;
	}
	return false;
}
bool see(string str,string key)    // ab        abcd
{
	for(int i=0;i<key.size();i++)
	{
		if(isFind(key[i],str) == false) return false;
	}
	return true;
}
int main()
{
	string str = "abcd";
	string key = "ab";
	
	cout<<see(str,key);
}
