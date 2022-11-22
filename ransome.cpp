#include<bits/stdc++.h>
using namespace std;

bool is_in(string ran,string mag)
{
	map <char,int> m;
	
	for(int i=0;i<mag.size();i++)
	{
		m[mag[i]]++;	
	}	
	map <char,int> :: iterator itr;
	
    for(int i=0;i<ran.size();i++)
    {
    	m[ran[i]]--;
	}
	
	for(itr=m.begin();itr!=m.end();itr++)
    {
    	if(itr->second < 0)
    	{
    		return false;
		}
      
    }
	
	return true;
	
	
}

int main()
{
	string ran;
	string mag;
	
	cin>>ran;
	
	cin>>mag;
	
	
	if(is_in(ran,mag))
	cout<<"yes";
	else
	cout<<"NO : ";
}
