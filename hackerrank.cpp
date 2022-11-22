#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   vector <ll int> v;
    int size,x,post;

    cin>>size;
    for(int i=0;i<size;i++)
    {   
        cin>>x;
        v.push_back(x);
    }
    
    cin>>post;

    v.erase(v.begin()+post);
    
    
    int r1,r2;
    cin>>r1>>r2;
    
    v.erase(v.begin()+r1-1,v.begin()+r2-1);
    
    cout<<v.size()<<endl;
    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
    
}
