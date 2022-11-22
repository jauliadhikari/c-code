#include<bits/stdc++.h>
using namespace std;
int maxi(int arr[],int size)
{
	if(size==0)
	{
		return arr[0];
	}
	
	return max(arr[size-1], maxi(arr, size-1));

}
int main()
{
	int arr[5]={4,1,8,3,2};
	int size=5;
    cout<<maxi(arr,size);
}
