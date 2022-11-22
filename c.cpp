#include<stdio.h>
int main()
{
     int lunchbox,schools,left,nextquantity,qty=0;
     printf("enter num of lunch boxes that are ready :");
     scanf("%d",&lunchbox);
     printf("no of schools ordered: ");
     scanf("%d",&schools);
     printf("enter order quantity for particular school :");
     int order[schools];
     for(int i=0;i<schools;i++)
     {
     	scanf("%d",&order[i]);                    
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
	printf("maximum no of schools we can deliver order are : %d",qty);
	return 0;
}
