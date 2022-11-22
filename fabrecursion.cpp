#include<iostream>
using namespace std;
int fab(int x)
{
	if(x==0)                                //0,1,1,2,3,5,8,13,21
	{
		return 0;
	}
	if(x==1)
	{
		return 1;
	}
	else
	{
	    int ans=fab(x-1)+fab(x-2);
		return ans;
	}
}
int main()
{  
  cout<<fab(6)<<endl;
}
