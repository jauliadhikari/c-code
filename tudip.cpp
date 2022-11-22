#include<iostream>
using namespace std;
int main()
{
	int arr[8]={1,2,3,4,5,6,7,8};
	int key,size=8,sum=0,i;
	cout<<"enter key element"<<endl;
	cin>>key;
	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
		if(sum>=key)
		{
			break;
		}
	
	
	}
	cout<<i<<endl;
    for(int j=0;j<=i;j++)
    {
    	cout<<arr[j]<<" ";
	}
	
}
