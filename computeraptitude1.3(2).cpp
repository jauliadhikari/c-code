#include<iostream>
using namespace std;
int main()
{
     int lunchbox,schools,left,nextquantity,qty=0;
     cout<<"enter num of lunch boxes that are ready"<<endl;
     cin>>lunchbox;
     cout<<"no of schools ordered"<<endl;
     cin>>schools;
     cout<<"enter order quantity for particular school"<<endl;
     int order[schools];
     for(int i=0;i<schools;i++)
     {
     	cin>>order[i];                    
	 }
	 
	 for(int i=0;i<schools;i++)
	 {  left =lunchbox;
	    nextquantity=0;
	 	for(int j=1;j<schools;j++)
	 	{   
		    left=lunchbox-order[j];
	 		if(left>=0)
	 		{
	 			left;
	 			nextquantity++;
	 		}
		}
		if(nextquantity>qty)
		{
		qty=nextquantity;
		}
	 }
	cout<<"maximum no of schools we can deliver order are "<<qty;
	return 0;
}
