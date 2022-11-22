#include<iostream>
# define max 100
using namespace std;
class stack{
	public:
		int top;
		int arr[max];
		stack()
		{
			top =-1;
		}
		void push(int x)
		{
			if(top==max-1)
			{
				cout<<"stack overflow "<<endl;
			}
			top++;
			arr[top]=x;
		}
		void pop()
		{
			if(top==-1)
			{
				cout<<"stack underflow"<<endl;
			}
			else
			{
				top--;
				
			}
		}
		int topp()
		{
			if(top==-1)
			{
				cout<<"stack underflow"<<endl;
			}
			else
			{
				return arr[top];
			}
		}
		
		
};
int main()
{
	stack s1,s2;
	
	int n;
	
	cout<<"Enter the numbers of integer you want to enter  :"<<endl;
	cin>>n;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		s1.push(x);
	}
	for(int i=0;i<n;i++)
	{
		s2.push(s1.topp());
		s1.pop();
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<s2.topp()<<endl;
		s2.pop();
	}
	
	
	
}
