#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{  int count1=1;
   int count2=1;
   int size;
   cin>>size;
   string arr;
   for(int i=0;i<size;i++)
   {
   	if(arr[0]+arr[1]%2==0 && arr[4]+arr[3]%2==0 && arr[5]+arr[6]%2==0 && arr[7]+arr[8]%2==0)
   	   {
   	   	 count1++;
		}	
	if(arr[2]=='A' || arr[2]=='E'||arr[2]=='I' || arr[2]=='O' ||arr[2]=='U' || arr[2]=='Y')
	{
	 	count2++;
	}	
   }
   if(count1==2 && count2==1)
   {
   	cout<<"valid";
   }
   else
   {
   	cout<<"invalid";
   }
}

