#include<iostream>
using namespace std;
long long int ans=0,currentsum;
int n,k,arr[100000];
int answer(int x)
{
    int ilimit=x-1;
    int jlimit=n-k+x+1;
    currentsum=0;
    for(int i=0;i<=ilimit;i++)
        currentsum+=arr[i];
    for(int j=n;j>=jlimit;j--)
        currentsum+=arr[j];
    if(currentsum>ans)
        ans=currentsum;
    return 0;
}
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    n--;
    for(int x=1;x<=k;x++)
        answer(x);
    cout<<ans;
    return 0;
}
 

