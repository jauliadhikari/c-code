/* 1. enter the book name
2. buy a book
3. search a book
4. modify book details 
5. exit */
#include<iostream>
#include<string>
using namespace std;
class books
{
	public:
		string title;
		string a_name;
		string p_name;
		int price,stock;
	
	void input()
	{
		cout<<"enter title name"<<endl;
		cin>>title;
		cout<<"enter author name"<<endl;
		cin>>a_name;
		cout<<"enter publisher name"<<endl;
		cin>>p_name;
	    cout<<"enter price"<<endl;
		cin>>price;
		cout<<"enter stock"<<endl;
		cin>>stock;
	}	
	void display()
	{
		cout<<" title name"<<title<<endl;
		cout<<" author name"<<a_name<<endl;
        cout<<" price "<<price<<endl;
		cout<<" stock "<<stock<<endl;
	}
	void bill(int quantity)
	{
		if(quantity<stock)
		{
			stock=stock-quantity;
			
			cout<<"total bill -> "<<quantity*price<<endl;
		}
		else
		{
			cout<<"stock is not there"<<endl;
		}
	}
	
};
int search(books arr[],string key,int size)
{
	for(int i=0;i<=size;i++)
	{
		if(arr[i].title == key)
		{
			return i;
		}
	}
}
int main()
{
    books* arr=new books[20];         
    int ch,i=0,quan;
    string temp;
    int post;
    while(1)
    {
	cout<<"enter 1 for enter new book details \n 2 for buy a book \n 3 for modify a book \n 4 for search abook \n 5 for exit"<<endl;
    cin>>ch;
    switch(ch)
    {
    	case 1:
    		arr[i].input();
    		i++;
    		break;
    	case 2:
		    cout<<"enter title"<<endl;	
		    cin>>temp;
		    cout<<"Enter the Qunatity of books : "<<endl;
		    cin>>quan;
		    post = search(arr,temp,i);
		    arr[post].bill(quan);
		    break;
		case 3:
			cout<<"enter title"<<endl;
			cin>>temp;
			post = search(arr,temp,i);
		    arr[post].input();
		    break;
		case 4:
		    cout<<"enter title"<<endl;
			cin>>temp;
			post = search(arr,temp,i);
			arr[post].display();
			break;
		case 5 :
			exit(0);
			break;
		default:
		    cout<<" no such inputs"<<endl;	
	}
}
}




