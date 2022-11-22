#include<bits/stdc++.h>
# define max 100
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
		if(top>-1)
		{
			cout<<arr[top]<<endl;
			top--;
		}
		else
		{
			cout<<"underflow"<<endl;
		}
	}
	void peek()
	{
		if(top>-1)
		{
			cout<<"have elements"<<endl;
		}
		else
		{
			cout<<"have no elements"<<endl;
		}
	}
	void is_empty()
	{
		if(top==-1)
		{
			cout<<"empty"<<endl;
		}
		else
		{
			cout<<"have elements"<<endl;
		}
	}
};

int main()
{
	stack obj;
	int i;
	int arr[max];

    while(true)
	{
    cout<<"enter 1 for push \n 2 for pop \n 3 for peek \n 4 for check empty \n 5 for exit \n "<<endl;
    cin>>i;
     switch(i):
     	case 1:
     		int x;
     		cin>>x;
     		obj.push(x);
     		break;
     	case 2:
		    obj.pop();
		case 3:
		    obj.peek();	
     	case 4:
		     obj.is_empty();
		case 5:
		    exit(0);
		    default:
		    	cout<<"no such input"<<endl;
	}
	
}
