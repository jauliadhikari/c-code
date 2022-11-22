#include<iostream>
using namespace std;
int main()
{
int i,j,n,arr[n],temp;
cout<<"enter the size of arr::"<<endl;
cin>>n;
for(i=0;i<n;i++)
{ cout<<"enter the arr["<<i<<"]element::"<<endl;
cin>>arr[i];
}

//sorting the arry elemnt in ascending order:
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
   
   swap(arr[i],arr[j]);

}
}

}

cout<<"sorting an arry in ascending order:"<<endl;
for(i=0;i<n;i++)
{
cout<<arr[i]<<endl;
}

return 0;
}


