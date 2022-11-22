#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int numc = num;
	int l=0;
	while(numc!=0)
	{
		l++;
		numc = numc/10;
	}
	int arr[l];                                                           
	for(int i=l-1;i>=0;i--)
	{
		arr[i]=num%10;   
		num = num/10;
	}
	swap(arr[0],arr[l-1]);
	
	int r=0;
	for(int i =0;i<l;i++)
	{
		r = r*10+arr[i];
	}
	cout<<r<<endl;
	
}
