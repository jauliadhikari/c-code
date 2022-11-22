#include<iostream>
using namespace std;
int main()
{   int sum=0;
    int arr[5];
    
    for(int i =0;i<5;i++)
    {
        cin>>arr[i];
    }
    int min = arr[0];
    int max=arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
        sum=sum+arr[i];
    }
   
    cout<<sum-max<<" "<<sum-min;
    
    

    
}
