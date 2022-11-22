#include<iostream>
using namespace std;
int main()
{
	int digit,reverse=0;
	int temp;
	cin>>digit;
	int num=digit; 
	while(digit!=0)
	{
	temp=digit%10;
	reverse=reverse*10+temp;
	digit=digit/10;
    }
    cout<<reverse<<endl;
	
}
