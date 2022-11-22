#include<bits/stdc++.h>
using namespace std;

int len(string s) {
     
        int l;
        
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==' ' && s[i+1] != ' ')
            {
                l = i;
            }
        }
        
        int cnt = 0;
        
        for(int j = l;j<s.size();j++)
        {
            if(s[j]!=' ')
                cnt++;
        }
        
        return cnt;
    }
int main()
{
	string str="   fly me   to   the moon  ";
	
	cout<<len(str);
	
	
}
