#include<iostream>
using namespace std;
int main()
{  int* ptr1;                                  
	int x=6;
	int* ptr=new int;
	ptr=&x;
	ptr1 = ptr;
	delete ptr;
	
	
	cout<<*ptr1;
	
}

