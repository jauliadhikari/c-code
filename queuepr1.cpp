#include<iostream>
#define max 100
using namespace std;
class queue
{     public:
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
	void peek()
	{
	   if (start == - 1)
       cout<<"Queue is empty"<<endl;
    else 
	  {
      cout<<"Queue elements are : ";
      for (int i = start; i <= end; i++)
      cout<<arr[i]<<" ";
      }
	}
	
};
int main()
{  
    int x,y;
    queue obj;
    while(true)
    {
	cout<<"enter choice 1.insert,2.display,3 for exit"<<endl;
	cin>>x;
	switch (x)
	{
	  case 1:
	  	obj.insert(y);
	  	cin>>y;
	  	break;
	  case 2:
	    obj.peek();
		break;
	  case 3:
	    exit(0);
		break;
	  default:
		cout<<"no such option"<<endl;	
	}
    }
}
