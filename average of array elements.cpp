// make a program to print the average of the array 
#include<iostream>
using namespace std;
int main()
{   int sum,result;
	int arr[5]={20,10,30,40,50};
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];            
	}
	result=sum/5;
	cout<<result;       
}
