#include<iostream>
using namespace std;
#define max 100
class stack
{
	public:
		int arr[max];
		int top;
	stack()
	{
		top=-1;
	}
	void push(int x)
	{
		if(top==max-1)
		{
			cout<<"overflow"<<endl;
		}
		else
		{
			top++;
			arr[top]=x;
		}
	}
	void pop()
	{
		int y;
		if(top==-1)
		{
			cout<<"underflow"<<endl;
		}
		else
		{
			y=arr[top--];
			cout<<y<<endl;
		}
	}
	void peek()
	{
		if(top==-1)
		{
			cout<<"underflow"<<endl;
		}
		else
		{
			cout<<"value is present"<<arr[top]<<endl;
		}
	}
};
int main()
{   
    int j=0,temp=0;
	stack obj;
	while(true)
	{
		cout<<"1 for push, 2 for pop , 3 for peek, 4 for exit"<<endl;
		cin>>j;
		switch(j)
		{
		   case 1:
		   	cin>>temp;
		   	obj.push(temp);
		   	break;
		   case 2:
		  	obj.pop();
		  	break;
		   case 3:
		    obj.peek();
		    break;
		   case 4:
		     exit(0);
		     break;
			default:
		     	cout<<"no such option available : "<<endl;
		     	break;
		}
	}
}
