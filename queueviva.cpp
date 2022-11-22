#include<iostream>
#define max 100
using namespace std;
class queue
{
	public:
		int front;
		int rear;
		int arr[max];
		queue()
		{
			front=-1;
			rear=-1;
		}
	void enqueue(int x)
	{
		if(rear==max-1)
		{
			cout<<"over flow"<<endl;
		}
		else
		{
			if(front==-1)
			{
				front++;
			}
			rear++;
			arr[rear]=x;
		}
		
	}
	void dequeue()
	{
		if(front==rear)
		{
			cout<<"no elements underflow"<<endl;
		}
		else
		{   	
		    cout<<arr[front]<<endl;
		    front++;
		}
	}
	void is_empty()
	{
		if(front > rear)
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
    int arr[max];
	queue obj;
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
			obj.enqueue(i);
			break;
		case 2:
		    obj.dequeue();
		    break;
		case 3:
		    obj.is_empty();
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
