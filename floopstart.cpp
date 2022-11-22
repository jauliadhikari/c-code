#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node* add;
node(int x)
{
data = x;
add = NULL;
}
};

void inserthead(node* &head,int x)
{
node* newnode = new node(x);
newnode->add = head;
head = newnode;
}
void loop(node* &head)
{
node* temp = head;
node* j = head;

while(temp->add!=NULL)
{
temp = temp->add;
}

temp->add = j->add->add->add;

}
void print(node* head)
{
while(head!=NULL)
{
cout<<head->data<<endl;
head = head->add;
}
}
node* poi(node* &head)
{
// floyd cycle detectio algo
node* slow=head;
node* fast = head;

while(slow!=NULL && fast!=NULL)
{
fast = fast->add;
if(fast!=NULL)
{
fast = fast->add;
}
slow=slow->add;
if(slow==fast)
{
return fast;
}
}
}
void bon(node* head)
{
node* slow = head;

node* fast = poi(head);

while(slow != fast)
{
slow = slow->add;
fast = fast->add;
}

cout<<slow->data<<endl;

}
bool is_loop(node* &head)
{
// floyd cycle detectio algo
node* slow=head;
node* fast = head;

while(slow!=NULL && fast!=NULL)
{
fast = fast->add;
if(fast!=NULL)
{
fast = fast->add;
}


slow=slow->add;

if(slow==fast)
{
return true;
}
}
return false;

}
int main()
{
node* node1 = new node(10);

node* head = node1;

inserthead(head,20);
inserthead(head,30);
inserthead(head,40);
inserthead(head,50);
inserthead(head,60);
inserthead(head,70);
inserthead(head,80);



head->add->add->add = head->add;

//loop(head);

if(is_loop(head)==true)
{
cout<<"loop is present meri jaan : "<<endl;
}

else
{
cout<<"loop is not present : "<<endl;
}
//print(head);

bon(head);
}
