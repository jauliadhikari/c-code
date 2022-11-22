#include<iostream>
using namespace std;
class task
{   
    
	public:
	void setinput()
{   int size;
    int arr[size];
	
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
}
void getinput()
{   int size;
    int arr[size];
	cout<<"print"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
	
};

int main()
{   
    
	cout<<" enter choice 1 for input \n 2 for output \3 for exit "<<endl;
    int ch;
    cin>>ch;
    task* obj=new task;
    int size=1;
    while(size==0)
    { 
      switch (ch){
	  
      	case 1:
      		cin>>size;
      		obj->setinput();
      	case 2:
      		obj->getinput();
      	case 3:
      		exit(0);
      	default:
      		cout<<"no case"<<endl;
    }}
}
