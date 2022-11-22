#include<iostream>
using namespace std;                              
int main()
{                                                        
	cout<<"enter details of"<<endl;
	int d,oc,of,od,cs,cb,cm,cd;
	cout<<"enter distance"<<endl;
	cin>>d;
	cout<<"oc,of,od";
	cin>>oc>>of>>od;
	cout<<"enter values of cs,cb,cm,cd";
	cin>>cs>>cb>>cm>>cd;
	
	int cost1=oc+(d-of)*cm;         
	int cost2=cb+d*cd+(d/cs)*cm ;   
	
	if(cost1<=cost2) 
	{
	cout<<"online taxi"<<endl;                                                     
    }
    else if(cost1>cost2)
    {
    	cout<<"classic taxi"<<endl;
	}
}
