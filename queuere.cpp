#include<iostream>
using namespace std;
#define max 100
class queue
{ 
    public:
    	int front,rear,arr[max];
    	queue()
		{
    		front=-1;
    		rear=-1;
		}
	void enqueue(int x)
	{
		if(rear==max-1)
		{
			cout<<"overflow"<<endl;
		}
		else
		{
			
			if(front == -1)
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
			cout<<"underflow"<<endl;
		}
		else
		{
			cout<<arr[front]<<endl;
			front++;
		}
	}
	void peek()
	{
		if(front>rear)
		{
			cout<<"underflow"<<endl;
		}
		else
		{
			cout<<arr[front]<<endl;
		}
	}
};
int main()
{   
    int x,temp=0;
	queue obj;
	while(true)
	{
		cout<<"1 for enqueue,2 for dequeue ,3 for peek,4 for exit"<<endl;
		cin>>x;
		switch(x)
		{
		  case 1:
		  	cin>>temp;
		  	obj.enqueue(temp);
		  	break;
		  case 2:
		    obj.dequeue();
		    break;
		  case 3:
		  	obj.peek();
		  	break;
		  case 4:
		  	exit(0);
		  	default:
		  		cout<<"no such options"<<endl;
		  		break;
		}
	}
}
