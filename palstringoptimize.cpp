#include<iostream>
using namespace std;
bool rev(string &str)
{
	int s=0;
	int e=str.size()-1;
	while(s<=e)
	{   
	    if(str[s++]!=str[e--])
	    {
		  return false;
    	}
		
	}
	return true;
}
int main()
{
	string str="paaraap";
	if(rev(str)==true)
	{
		cout<<"pal"<< " ";
	}
	else
	{
		cout<<"not pal"<<endl;
	}
}
