#include<bits/stdc++.h>
using namespace std;  

void fun(string str)
{
	int count=1,x=0,j=0;
	char ch;
	int indp = 0;
    vector<int> v;
		for(int j=0;j<str.size();j++)
		{
			if(str[j]==str[j+1])
			{
				count=count+1;
			}
			else
			{	
			   v.push_back(count);
			   count=1;
			}
			
		}
		
		//cout<<*max_element(v.begin(),v.end());
		
		map<char,int> m;
		
		for(int i=0;i<str.size();i++)
		{
			m[str[i]]++;
		}
		                        
		for(auto i : m)
		{
			if(i.second == *max_element(v.begin(),v.end()))
			{
				cout<<i.first<<"--->>"<<i.second<<endl;
				
			}
		}
}

int main()
{
	string str;
	cin>>str;
	pair<char,int> p_array[str.size()];
	fun(str);
	//print(p_array,str);
	
	
	
}
