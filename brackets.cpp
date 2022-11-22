#include<iostream>
using namespace std;
int main()
{   int i,sum=0;
    int sum2=0;
	int arr1[4]={1,2,3,-1};
	int arr2[4]={1,2,3,4};
	int differ;
	for(i=0;i<4;i++)
	{   
	    if(arr1[i]>0)
		{
		sum=sum+arr1[i];
	    }
		
	}
	for(i=0;i<4;i++)
	{   if(arr2[i]>0)
		{
		sum2=sum2+arr2[i];
		}
	}
	if(sum==sum2)
	{
		cout<<"equal";
	}
	else
	{   differ=sum2-sum;
	    cout<<differ<<endl;
		cout<<"not equal"<<endl;
	}
}

