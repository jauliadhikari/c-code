#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()

{
   ll int size , k , sum1 = 0 , sum2 = 0,maxi =INT_MIN;
   cin >> size >> k;
   vector<ll int> arr(size);
   for(int i = 0 ; i < size ; i++)
   {
     cin >> arr[i];
   }
    
	queue<ll int> queue;
    stack<ll int> stack;
    for(int i = size - k ; i < size ; i++)
    {
       sum2 =sum2+ arr[i];
       queue.push(arr[i]);
	}
   int index = 0 , 
   i = size - k + 1;
   while(k--)

   {

       stack.push(arr[index++]);

       sum1 =sum1+ stack.top();

       sum2 = sum2 - queue.front();

       queue.pop();

       maxi = max(maxi , sum2 + sum1);

   }

   cout << maxi << endl;
}


