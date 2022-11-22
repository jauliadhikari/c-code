#include<iostream>
#include<string>
using namespace std;
void dub(string str)
{   
	char temp;
    for(int i=0;i<str.length();i++)
    {
		temp=str[i];
		for(int j =i+1;j<str.length();j++)
		{
			if(str[j]==temp)
			{
				cout<<str[j]<<" ";
				break;
			}
			
		}			  
    }
	
}
int main()
{
	string str;
	cout<<"enter string"<<endl;
	getline(cin,str);
	
	cout<<"duplicate characters : "<<endl;
	
	dub(str);
}
