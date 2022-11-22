#include<iostream>
using namespace std;
int main()
{
	int x;
	while(true)
	{
	cout<<"enter the month number";
	cin>>x;
	switch(x)
	{
		case 1:
			cout<<"januaray"<<endl;
			break;
		case 2:
		    cout<<"febuaray"<<endl;	
			break;
		case 3:
		    cout<<"march"<<endl;
			break;
		case 4:
			cout<<"april"<<endl;
			break;
		case 5:
		    cout<<"may"<<endl;	
			break;
		case 6:
		    cout<<"june"<<endl;
			break;		
	    case 7:
			cout<<"july"<<endl;
			break;
		case 8:
		    cout<<"august"<<endl;;	
			break;
		case 9:
		    cout<<"september"<<endl;
			break;
	    case 10:
			cout<<"october"<<endl;
			break;
		case 11:
		    cout<<"November"<<endl;	
			break;
		case 12:
		    cout<<"December"<<endl;
			break;
	    default:
	    	cout<<"no such option";
	    	exit(false);
	
}}
    }


