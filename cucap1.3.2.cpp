#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int lunchbox,schools,left,nextquantity,qty=0;
     cout<<"enter num of lunch boxes that are ready"<<endl;
     cin>>lunchbox;
     cout<<"no of schools ordered"<<endl;
     cin>>schools;
     cout<<"enter order quantity for particular school"<<endl;
     int* order = new int[schools];
     for(int i=0;i<schools;i++)
     {
     	cin>>order[i];                    
	 }
	 
	 sort(order,order+schools);
	 
	 int ans=0;
	 int sum=0;
	 
	 for(int i =0;i<schools;i++)   
	 {
	 	if(sum+order[i]>lunchbox)
	 	{
	 		break;
		}
		else
		{
			ans++;
			sum= sum+order[i];            
		}
	 }
	 cout<<"order fullfulled is : "<<ans<<endl;
}
	 
	 

