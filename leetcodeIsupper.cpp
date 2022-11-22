#include<bits/stdc++.h>
using namespace std;
bool hh(string word)
{
	int cnt =0;
        
        for(auto i : word)
            {
                if(isupper(i)==true) cnt++;
            }
        
        cout<<cnt;
        
        if((cnt == 0) 
        
        || (cnt == 1 && isupper(word[0])) 
        
        || (cnt == word.size()) ) 
		{
		return true;
	    }
        
        
        return false;
}

int main()
{
	
	
	
	cout<<hh("FlaG");
}
