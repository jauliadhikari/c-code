#include<iostream>
using namespace std;
int main()
{
	int arr[7]={2,7,1,4,0,6,45};
	int max=0,min=0,size=7;
	for(int i=1;i<size;i++)
	{   
	    if(max<arr[i])
	    {
	    	max=arr[i];
		}
		else if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<min<<" "<<max<<endl;
}
