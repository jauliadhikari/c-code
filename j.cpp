#include<iostream>
#define max 50
using namespace std;
class stack
{
        public:                   
		int count, top1,top2;
		int stk1[50],stk2[50];
		stack()
		{
		  top2=-1;
		  top1=-1;
	    }
		void push1(int x)
		{
			if(top1==max-1)
			{
				cout<<"stack overflow"<<endl;	
			}
			else
			{
				top1++;
				cin>>stk1[top1];
			}
		}
	   void pop1()
		{
			if(top1==-1)
			{
				cout<<"underflow"<<endl;
			}
			else
			{   
			    cout<<stk1[top1];
				top1--;
			
			}
		}
	
			void push2(int x)
		{
			if(top2==max-1)
			{
				cout<<"stack overflow"<<endl;	
			}
			else
			{
				top2++;
				cin>>stk2[top2];
			}
		}
	    void dequeue()  
       {  
       if((top1==-1) && (top2==-1))  
       {  
       printf("\nQueue is empty");  
       }  
       else  
       {  
       for(int i=0;i<count;i++)  
       {  
       int element = pop1();  
       push2(element);  
       }}
       
       void display()
	   {
		while(top2!=-1) 
		{
			cout<<stk2[top2]<<endl;
			top2--;
		}
       }
};
int main()
{   
    stack obj;
    int x;
    cin>>x;
    obj.push1(x);
    obj.push1(x);
    obj.push1(x);
    obj.push1(x);
    
    cout<<"-----stack 2------"<<endl;
    
    obj.dequeue();
    obj.dequeue();
    obj.dequeue();
    obj.dequeue();
    obj.display();
    
}		
		
		
