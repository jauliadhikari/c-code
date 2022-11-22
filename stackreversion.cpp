#include<iostream>
#define max 100
using namespace std;
class stack
{
	int arr[max];
	int top;
	public:
		stack()
		{
			top=-1;
		}
	void push(int x)
	{  
		if(top==max-1)
		{
		  cout<<"stack overflow";
		}
		
		top++;
		arr[top]=x;
		cout<<"Push is done: "<<endl;
	}	
	void pop()
	{
		if(top==-1)
		{			
		   cout<<"Stack is underflow";
		}
		else
		{
			top--;
			cout<<"pop is done"<<endl;
		}
	}
	void peek()
	{
		if(top==-1)
		{
			cout<<"stack underflow"<<endl;
			return;
		}
		cout<<arr[top]<<endl;
	}
	void is_empty()
	{
		if(top==-1)
		{
			cout<<"stack empty"<<endl;
		}
		else
		{
			cout<<"not empty"<<endl;
		}
	}	
};

int main()
{
	int ch;
	stack obj;
	while(true)
	{
	cout<<"enter choice 1 for push \n 2 for pop \n 3 for peek \n 4 for empty \n 5 for exit"<<endl;
	int x;
	cout<<"enter choice"<<endl;cin>>x;
	switch(x)
	{
		case 1:
			int i;cin>>i;
			obj.push(i);
			break;
		case 2:
			obj.pop();
			break;
		case 3:
		    obj.peek();
		    break;
		case 4:
			obj.is_empty();
			break;
		case 5:
		    exit(0); 
			break; 
			
		default:
		    cout<<"no such input"<<endl;		
	}
	}
	
}

