#include<iostream>
using namespace std;
int main()
{
	int array[5]={1,2,3,4,5};
	int start=0;
	int end=4;
	while(start<=end)
	{
		swap(array[start++],array[end--]);
	}
	for(int i=0;i<5;i++)
	{
		cout<<array[i]<<endl;
	}
	
}
