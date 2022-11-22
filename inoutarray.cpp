#include<iostream>
using namespace std;
#define max 10
class data
{   public:
	
	int arr[max]; 
	void setinput()
    {
	 for(int i=0;i<max;i++)
	 {
	 	cin>>arr[i];
	 }
    }
    void getinput()
    {
	 for(int i=0;i<max;i++)
	 {
	 	cout<<arr[i];
	 }
    }
};
int main()
{   
 int size;
 cin>>size;
 data* obj=new data;
 obj->setinput();
 obj->getinput();
 
	
}
