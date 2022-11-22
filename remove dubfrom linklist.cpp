
void del(node* &head,node* temp)
{
	    node* prev=head;
	    
	    while(prev->add!=temp)
        {
        	prev=prev->add;
		}
		
		prev->add=temp->add;
		
		delete temp;
}


void dub(node* &head)
{
	map <int,bool> m;
	node* temp=head;
	
    while(temp!=NULL)
	{
	if(m[temp->data]==false)
	{   
	    //prev=temp->add;
		m[temp->data] = true;
		temp= temp->add;
	}
	if(m[temp->data]== true)
	{   
	    node* next=temp->add;
		del(head,temp);
		temp=next;
	}
    }
}
int main()
{
	node* node1=new node(4);
	
	node* head=node1;
	
	map<int,bool> m;

	inserthead(head,4);
	
	inserthead(head,3);
	
	inserthead(head,3);
	
	inserthead(head,2);
	
	inserthead(head,2);
	
	inserthead(head,1);
	
	inserthead(head,1);
	
	print(head);
	
	dub(head);
	cout<<endl;
	
	print(head);
	
	
	
}
