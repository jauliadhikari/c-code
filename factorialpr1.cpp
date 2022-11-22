#include<iostream>
using namespace std;

int main()
{   int fact,x,multiply=1;
    cin>>fact;
	while(fact>1)
	{
		x=fact*(fact-1);
		x=multiply*x;
		fact--;
	}
	cout<<x<<endl;
}
