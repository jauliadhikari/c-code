#include<iostream>
using namespace std;
int main()
{
    long int n,a[100]={0},ind,max;
    cin>>n;
    max=n;
    for(int i=0;i<n;i++)
    {
        cin>>ind;
        a[ind]=ind;
        if(ind==max)
        {
            while(a[ind]!=0)
            {
                cout<<a[ind];
                ind--;
            }
            max=ind;
            cout<<endl;
        }
        else
          cout<<endl;
    }
    return 0;
}
