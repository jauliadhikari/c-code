#include<iostream>
using namespace std;
int main()
{   int row,sum1,sum2,greencost,purplecost;
    cout<<"enter num of rows,cost of green,cost of purple"<<endl;
    cin>>row;
    cin>>greencost;
    cin>>purplecost;
	int arr[row][2];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<2;j++)
		{   
		cin>>arr[i][j];
		  if(j==0)
		    {
			sum1=(arr[i][j]*greencost)+sum1;
		    }
		    else
		    {
		  sum2=(arr[i][j]*purplecost)+sum2;
	        }
		}
	}

cout<<"sum1 greencost"<<sum1;
cout<<"sum2 purplecost"<<sum2;
if(sum1<sum2)
{
	cout<<"less amount "<<sum1;
}
else
{
	cout<<sum2;
}}
