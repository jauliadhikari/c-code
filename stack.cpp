#include<iostream>
using namespace std;
#define max 100
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
		if(top == max-1)
		{
			cout<<"stack is overflow:"<<endl;	
		}	
		else
		{
			top++;
			arr[top] = x;
			cout<<"insertion has been done :"<<endl;
		}
	}	
	int pop()
	{
		int y;
		if(top == -1)
		{
			cout<<"stack is underflow "<<endl;
			return 0;
		}
		else
		{
			y = arr[top];
			top--;
			return y;
		}
	}
	void status()
	{
		if(top==-1)
		{
			cout<<"stack is empty"<<endl;
		}
		else if(top==max)
		{
			cout<<"stack overflow"<<endl;
		}
		else
		{
			cout<<"have some values"<<endl;
		}
	}
};

int main()
{   
    int j,temp;
    stack obj;
    while(true)
    {
	cout<<"enter the choice 1 for push\n 2 for pop \n 3 for status of stack \n 4 for exit "<<endl;
	cin>>j;
	switch (j)
	{
		case 1:
		  cout<<"enter value for stack"<<endl;
		  cin>>temp;
		  obj.push(temp);
		  break;
		case 2:
			temp = obj.pop();
		  cout<<temp<<endl;
		  break;
		case 3:
		  obj.status();
		  break;
		case 4:
		  exit(0);
		  break;
		default:
			cout<<"no such option available"<<endl;
	}
	}
}













