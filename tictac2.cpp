#include<iostream>
#include<cstdlib>

using namespace std;
char currmarker;
int  currplayer;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void drawboard()
{
	cout<<" "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<endl;
	cout<<"----------\n";
	cout<<" "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<endl;
	cout<<"----------\n";
	cout<<" "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<endl;
	cout<<"----------\n";
}

bool placeMarker(int slot)
{
	int row=slot/3;
	if(slot%3 == 0)
	{
		row=(slot/3)-1;
	}
	else
	row=slot/3;
	cout<<row<<endl;
	
	int col;
	if(slot%3==0)
	{
		col=2;
	}
	else
	{
		col=(slot%3)-1;
	}
	
	if(board[row][col]!= "x"  && board[row][col] != "0") 
	{
	board[row][col]=current_marker;
	return true;
    }
    else return false;
}
char winner()
{
	for(int i=0;i<3;i++)
	{
		if(board[i][0]==board[i][1] && board[i][1]==board[i][2])
		{
			return currplayer;
		}
		if(board[0][i]==board[1][i] && board[1][i]==board[2][i])
		{
			return currplayer;
		}
	}
	if(board[0][0]==board[1][1] && board[1][1]]==board[2][2])
	{
		return currplayer;
	}
	if(board[0][2]==board[1][1] && board[1][1]]==board[2][0])
	{
		return currplayer;
	}
	return 0;
}
void swappl_and_marker()
{
	if(currmarker=="x")
	{
		currmarker="0";
	}
	else
	currmarker="x";
	
	if(currplayer==1)
	{
		currplayer=2;
	}
	else
	currplayer=1;
}
void game()
{
	cout<<"player one choose marker: "<<endl;
	char markerpl;
	cin>>markerpl;
	
	currplayer=l;
	currmarker=markerpl;
	drawboard();
	int playerwon;
	for(int i=0;i<4;i++)
	{
		cout<<"its player"<<currplayer<<"enter your slot:"<<endl;
		int slot;
		cin>>slot;
		if(slot<1||slot>9)
		{
			cout<<"invalid! try another slot"<<endl;
			i--;
			continue;
		}
		if(!placemarker(slot));
		{
			cout<<"that slot occupied"<<endl;
			i--;
			continue;
		}
		drawboard();
		playerwon=winner();
		if(playerwon==1)
		{
			cout<<"player one won ! well done"<<endl;
			break;
		}
		if(playerwon==2)
		{
			cout<<"player one won ! well done"<<endl;
			break;
		}
		swappl_and_marker();
		drawboard();
	}
	if(playerwon==0)
		{
			cout<<"tie game"<<endl;
			break;
		}
	
}
int main()
{
	srand(time(NULL));
	cout<<(rand()%(10-1+1))+1;
	game();
}









