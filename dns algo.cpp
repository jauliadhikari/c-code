#include<bits/stdc++.h>
using namespace std;
int main()                                  //dutch national flag algorithm
{
	vector <int> v;  
	for(int i=0;i<5;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	
	int i=0;
	for(int j=1;j<v.size();j++)                                       //1,2,2,3,3
	{
		if(v[i]!=v[j])                          // i=0,j=1
		{                                       //i=1, 2,
			i++;                                //i=1,j=2    
			v[i]=v[j];                          //i=1,j=3
		}                                       //i=2,j=3                  //1,2,3,3,3
	}                                           //i=2,j=4
	                                            //i=2,j=5
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
}
