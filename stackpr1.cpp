#include<iostream>
#define max 100
using namespace std;
class stack
{
	public:
		int size,top;
		int arr[max];
		stack()
		{
		  int top=-1;
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
				cin>>arr[top];
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
	    void empty()
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
{   int x;
    stack obj;
    while(true)
    {
	cout<<"  enter choice 1 for push ,2 for pop ,3 for check ,4 for exit /n: "<<endl;
	cin>>x;
	switch (x)
	{
		case 1:			
		    obj.push(5);
			break;
		case 2:
		    obj.pop();
			break;	
		case 3:
		    obj.empty();	
		    break;
		case 4:
			exit (0);
    }
	}
}
