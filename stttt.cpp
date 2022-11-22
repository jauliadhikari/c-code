int main()
{
	int i;
	int temp;
	stack std;
	while(true)
	{
		cout<<"enter choice : \n 1. for push "<<endl;
		cin >>i;
		switch (i)
		{
			case 1:
				cout<<"enter th push value "
			cin>>temp;
			std.push(temp);
			break;
			case 2:
			temp = std.pop();
			cout<<temp<<endl;
			break;
		
		}
		
	}
}








