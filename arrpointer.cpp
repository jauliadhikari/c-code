#include<iostream>
using namespace std;
int main()
{ 
    int arr[5]={1,2,3,4,5};
	for(int i=0;i<5;i++)
	{   
	    int* p1 =arr;
		cout<<p1<<endl;
	}
}
