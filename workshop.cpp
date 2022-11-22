#include<iostream>
using namespace std;
int main()
{
	int x =10;
	int y =20;
	
	int* p =&x;
	
	int** q = &p;
	
	**q = ++*p + y;
	
	*p = ++**q+x;  // left to right 
	
	
	cout<<x<<" "<<y;
}
