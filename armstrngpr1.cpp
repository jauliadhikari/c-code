// 1634 1^4 + 6^4 +3^4 + 4^4  153 
#include<iostream>
#include<bits/stdc++.h>  
using namespace std;
int main()                     
{
	int digit,sum,temp=0;
	cin>>digit;
	int cp1 = digit;
	int len=0;
	while(cp1!=0)
	{
		cp1 = cp1/10;
		len++;
	}
	int copy=digit;
	while(digit!=0)
	{
		temp=digit%10;
		sum=sum + pow(temp,len);
		digit=digit/10;
	}
    if(sum==copy)
    {
    	cout<<"armstrng"<<endl;
	}
	else
	{
		cout<<"not armstrng"<<endl;
	}
	
}
