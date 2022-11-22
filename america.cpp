#include<bits/stdc++.h>
using namespace std;
bool find(vector<int> arr,int key)
{
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]==key) return true;
	}
	return false;
}
int main()
{
	vector<int> arr1={1,2,3,4,5},  arr2 = {4,5,6,7};
	
	//4,5
	// list are soteed in nature 0(n)  // 0(longn) - o(n^2)  0(nlongn)
	
	for(int i=0;i<arr2.size();i++)
	{
		if(find(arr1,arr2[i])  == true)
		cout<<arr2[i]<<endl;
	}
	
		
}
