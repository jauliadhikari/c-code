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
};
int main()
{
	int i;
	int temp;
	stack std;
	while(true)
	{
		cout<<"enter choice "<<endl;
		cin >>i;
		switch (i)
		{
			case 1:
			cin>>temp;
			std.push(temp);
			break;
			case 2:
			temp = std.pop();
			cout<<temp<<endl;
			break;
		
		}
		
	}
}
