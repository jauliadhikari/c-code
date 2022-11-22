#include<iostream>
#define max 100
using namespace std;
class stack
{
	public:
		int top;
		int arr[max];
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
		if(top==-1)
		{
			cout<<"underflow"<<endl;
		}
		else
		{
			cout<<arr[top]<<endl;
			top--;
		}
	}
	void peek()
	{
		if(top>-1)
		{
			cout<<"have elements"<<endl;
			cout<<arr[top]<<endl;
		}
		else
		{
			cout<<"no elements"<<endl;
		}
		
	}
};
int main()
{
	int arr[max];
	stack obj;
	int ch;
	while(true)
	{
	cout<<"enter 1 for push \n 2 for pop \n 3 for peek \n 4 exit \n "<<endl;
	cin>>ch;
	switch (ch)
	{
		case 1:
			int i;
			cin>>i;
			obj.push(i);
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
			cout<<"no such input"<<endl;
			break;	   
	}
}


	
	
	
	
}
