#include<iostream>
using namespace std;
inline int sq(int i)
{
	return i*i;
}
int main()
{
	int n;
	
	cin>>n;
	
	for(int i=1;i<n;i++)
	{
		if(sq(i)==n)
		{
			cout<<" square rooot : "<<i<<endl;
			break;
		}
		if(sq(i)>n)
		{
			cout<<" nearest sq : is "<<i-1<<endl;
			break;
		}
		
	}
	
	
}
