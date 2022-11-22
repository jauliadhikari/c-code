#include<iostream>
#include<vector>
using namespace std;
void Insert(vector<int> &arr)
{
	int temp,j;
	for(int i=1;i<arr.size();i++)
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
		arr[j+1] = temp;
	}
}
void Print(vector <int> arr)
{  
   for(int i=0;i<arr.size();i++)
   {
   	    cout<<arr[i]<<endl;
   }
}
int main()
{
	vector<int> arr;
	int d,size;
	cout<<"enter the size"<<endl;    
	cin>>size;
	for(int i=0;i<size;i++)
	{                                         
	    cin>>d;
		arr.push_back(d);
	}
	Insert(arr);
	Print(arr);
}
