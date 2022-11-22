#include<iostream>
using namespace std;
int num(int x)
{  if(x<0)
   {
   	return 1;
   }
   else
   {
   	return (x+num(x-1)); 5,4,3,2,1
   }                                     
                                
}
int main()
{
	cout<<num(5)<<endl;
}
