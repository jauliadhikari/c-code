#include<iostream>
using namespace std;
int time(int hours,int mins)
{
	int t;
	t=hours*60*60+mins*60;
	return t;
}
int main()
{   
    int seconds;
    int hours;
    int mins;
    cout<<"enter hours and mins to convert"<<endl;
    cin>>hours>>mins;
	seconds=time(hours,mins);
	cout<<" in seconds "<<seconds<<endl;
}
