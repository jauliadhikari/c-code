#include<iostream>
using namespace std;
int main()
{
	int* p1;
	int arr[5]={10,12,13,15,78};
	p1=arr;
	for(int i=0;i<5;i++)
	{
		cout<<*p1<<endl;
		p1++;
	}
	return 0;
}
