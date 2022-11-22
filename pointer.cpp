#include<iostream>
using namespace std;
int main()
{
	int *a;
	int *b;
	int *c;
	int num1=5;
	int num2=8;
	int num3;
	a=&num1;
	b=&num2;
	c=&num3;
	c=a;
	a=b;
	b=c;
	cout<<*b<<endl;    
	cout<<*a<<endl;
	
	
	
	
	
}
