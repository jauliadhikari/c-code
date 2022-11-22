void revp(node* &head)
{
	node* prev = head;
	node* curr = head->add;
	node* forw = head->add->add;
	node* t = NULL;
	curr->add = prev;
	prev->add = forw;
	head = curr;
	t = prev;
	while(forw!=NULL && forw->add!=NULL)
	{
		prev = forw;
		curr = forw->add;
		forw = forw->add->add;
		curr->add = prev;
		prev->add = forw;
		t->add = curr;
		t = prev;
	}
}






