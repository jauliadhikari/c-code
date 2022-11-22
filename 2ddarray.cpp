#include<bits/stdc++.h>
using namespace std;
bool search1(int arr[][3], int target, int row, int col) {

  for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            
            if( arr[row][col] == target) {
                return 1;
            }
            
        }
    }
    return 0;
}

int main()
{
	int n,sum=0;
	n=3;
	int arr[3][3];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	// row sum logic
	/* for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j];
			sum=sum+arr[i][j];
		}
		cout<<" row sum "<<i+1<<"is"<<sum;
		cout<<endl;
		sum=0;
	}*/
	int key;
	cout<<"key enter";
	cin>>key;
	if(search1(arr, key, 3, 3)) {
        cout <<" Element found " << endl;
    }
    else{
        cout <<" Not Found" << endl;
    }

	
}
