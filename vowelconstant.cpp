#include<iostream>
#include<string>
using namespace std;
int main()
{                       
    string str;
    cin>>str;
    string vowel,consonant;
    int len=str.length();
    for(int i=0;i<len;i++)
    {
    	if(str[i] == 'a' || str[i] =='e' || str[i]=='i' || str[i]=='o' ||str[i] =='u')
        {
    	 vowel = vowel + str[i];
	    }
	    else
	    {
	    	consonant=consonant+str[i];
		}
	}
	cout<<str<<endl;
	cout<<"vowels "<<vowel<<endl;
	cout<<"consonant "<<consonant<<endl;
}
