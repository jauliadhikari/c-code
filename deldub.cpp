#include<iostream>
#include<string>
using namespace std;
void del()
{
	char temp;
    for(int i=0;i<str.length();i++)
    {
		temp=str[i];
		for(int j =i+1;j<str.length();j++)
		{
			if(str[j]==temp)
			{
				str[j]="--";
				break;
			}
			
		}			  
    }
	
}
int main()
{
	string str;
	getline(cin,str);
	
	del(str);
}
