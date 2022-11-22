// fibonaci sereies -> 0 , 1 , 1 , 2 , 3 ,5 ,8 , 13
//   f(5) = f(n-1) + f(n-2)    (5)
#include<iostream>
using namespace std;
int fib(int n)
{
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	
	int ans = fib(n-1)+fib(n-2);
	
	return ans;
}

int main()
{
	int i= 0;
	
	while(i<=200)
	{
		cout<<fib(i)<<endl;
		i++;
	}
	
}
