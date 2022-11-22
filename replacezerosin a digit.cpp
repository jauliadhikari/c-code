#include<iostream>
using namespace std;
int main()
{
    int i,d,result;
    cout<<"enter digit"<<endl;
    cin>>i;
    int temp=1;
    
    while(i!=0)
    {
    	d=i%10;
    	if(d==0)
    	{
    		d=1;
		}
		result=d*temp+result;
		i=i/10;
		temp=temp*10;
		
	}
	cout<<result;
    
}
