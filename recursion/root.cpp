#include<iostream>
using namespace std;
int root(int i,int key)
{  
    i=100;
   if(i*i==key)
   {
   	return i;
   }
   int re=root(i-1,key);
   return re;
	
	
}

int main()
{
	int key;
	cin>>key;
	int i=100;
	cout<<root(i,key)<<endl;
}
