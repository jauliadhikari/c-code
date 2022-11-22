// polymorphism -> 1. function overlaoding 2. function overiding 3. operator overaloading 
#include<iostream>
using namespace std;
class test
{   
	public:
	int sum(int i,int j)
	{
	  int s1=i+j;
	  return s1;
	}
	int sum(int i,int j,int k)
	{
	   int 	s2=i-j-k;
	   return s2;
	}
};
class testchild : public test    //:: -> scope resolution operator // this is : inheritance 
{
	public:
	void sum()	
	{
		cout<<"this is a overided function :"<<endl;
	}
};

int main()
{
	test* obj=new test;
	
	testchild obj2;
	
	obj2.sum();
	
    cout<<obj->sum(4,5)<<endl;
    
	cout<<obj->sum(4,5,8)<<endl;
}
