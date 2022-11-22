#include<iostream>
using namespace std;
#define max 100
class queue
{   
	public:
		int start,end,arr[max];
		queue()
		{
		start=-1;
		end=-1;
		}
	void insert(int x)
	{
		if(end==max-1)
		{
			cout<<"overflow"<<endl;
		}
		else
		{
			if(start==-1)
			{
				start++;
			}
			end++;
			arr[end]=x;
		}
	}
	void display()
	{
		if(start==-1)
		{
			cout<<"underflow"<<endl;
		}
		else
		{
			cout<<arr[start]<<endl;
		}
	}
};
int main()
{
	queue obj;
	obj.insert(5);
	obj.insert(8);
	obj.insert(10);
	obj.insert(12);
	obj.display();
}






