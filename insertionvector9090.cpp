//insertion sort
#include<iostream>
#include<vector>
using namespace std;
void insert(vector <int> &arr)
{   
	int temp,j;
    int size=arr.size();
	for(int i=1;i<size;i++)
	{
		temp=arr[i];
   	 	for(j=i-1;j>=0;j--)
   	    {
   			if(arr[j]>temp)                                                 
		    {
		   	   arr[j+1]=arr[j];
		    }
			else
			{
				break;
			}	
		}
		arr[j+1]=temp;
   } 
	
}
void print(vector <int> arr)
{
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	vector<int> arr;
	int d;
	for(int i=0;i<5;i++)
	{
		cin>>d;
		arr.push_back(d);
	}
	insert(arr);
	
	
	print(arr);
	
}
