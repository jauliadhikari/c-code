#include<iostream>
using namespace std;
int main()
{
        int i, j, n=1, cnt;
        cout<<"\n Enter Number of Rows : ";
        cin>>cnt;
        cout<<"\n";
        for(i=0; i<cnt; i++)
        {
                for(j=0; j<=i; j++)
                {
                        cout<<n<<" ";
                        n++;
                }
                cout<<"\n";
        }
        return 0;
}

