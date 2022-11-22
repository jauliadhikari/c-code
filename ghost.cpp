#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n,m;
   cin>>n>>m;
   unordered_map<int,int> int ghost;
   int best = -1;
   cin>>best;
   ghost[best]+=1;
   
   cout<<best<<" "<<1<<endl;
   for(int i = 0;i<n-1;i++)
   {
    int y;
    cin>>y;
    ghost[y]+=1;
    if((ghost[y]>ghost[best]) || (ghost[y]==ghost[best] && y>best)) best = y;
    cout<<best<<" "<<ghost[best]<<"\n";
    }

}
