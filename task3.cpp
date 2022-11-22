#include<iostream>
#include<string.h>
using namespace std;
class books
{
	public:
		
		string title,authorr;
		int price,total,stocks,sno;
		books(string namee, string author,int x,int y)
		{
			title=namee;
			authorr=author;
			stocks=x;
			price=y;
		}

void insertdata()
{   
	cout<<"enter details serial no,title,author,stocks,price"<<endl;
	cin>>sno;
	cin>>title;
	cin>>authorr;
	cin>>stocks;
	cin>>price;
}
void getdata()
{
	cout<<"s.no"<<sno<<endl;
	cout<<"title"<<title<<endl;
	cout<<"author"<<authorr<<endl;
	cout<<"stocks"<<stocks<<endl;
	cout<<"price"<<price<<endl;
}
};
int main()
{
	books* obj=new books();
	obj->insertdata();
	obj->getdata();
}
