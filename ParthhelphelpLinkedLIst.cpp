#include<iostream>
using namespace std;
class books
{
	public:
		string title;
		string a_name;
		string p_name;
		int price,stock;
	books()
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
	void moify()
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
	    cout<<" publisher name"<<p_name<<endl;
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
class node
{
	public:
	books data;
	node* add;
	node()
	{
		add = NULL;
	}
};
void inserthead(node* &head)
{
	node* newnode = new node;
	newnode->add = head;
	head = newnode;
}
void print(node* head)
{
	while(head!=NULL)
	{
		head->data.display();
		head = head->add;
	}
}
void Billshow(node* head,string key,int q)
{
	
	while(head!=NULL)
	{
		if(head->data.title==key)
		{
			head->data.bill(q);
		}
		head = head->add;
	}
	
	
}
void mod(node* head,string key)
{
	while(head!=NULL)
	{
		if(head->data.title==key)
		{
			head->data.moify();
		}
		head = head->add;
	}
}
void se(node* head,string key)
{
	while(head!=NULL)
	{
		if(head->data.title==key)
		{
			head->data.display();
		}
		head = head->add;
	}
}
int main()
{
	node* head=NULL;
	int ch,quan;
	string tit;
	while(true)
	{
	cout<<" 1 for enter new book details \n 2 for buy a book \n 3 for modify a book \n 4 for search abook \n 5 for exit"<<endl;
	cin>>ch;	
	switch(ch)
	{
		case 1:
			inserthead(head);
			break;
		case 2:
			cout<<"Enter the tiitle of the book : "<<endl;
			cin>>tit;
			cout<<"Enter the quantity : "<<endl;
			cin>>quan;
			Billshow(head,tit,quan);
			break;
		case 3:
			cout<<"Enter the tiitle of the book : "<<endl;
			cin>>tit;
			mod(head,tit);
			break;
		case 4:
			cout<<"Enter the tiitle of the book : "<<endl;
			cin>>tit;
			se(head,tit);
			break;
		case 5:
			exit(0);
			
	}
	}
	
} 
