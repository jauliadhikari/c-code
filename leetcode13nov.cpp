#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) 
    {
        stack<string> st;
        string str="";
        for(int i=0;i<s.size();i++)
        {
        	string str ;
            if(s[i]!=' ')
            {
            	while(i<s.size() && s[i]!=' '){
            		str = str + s[i];
            		i++;
				}
				st.push(str);
				
       }
        }
        string ans = "";

        while(!st.empty())
        {
            ans = ans + st.top();
            st.pop();
        }

        return ans;

    }
    int main()
    {
    	string str = "The jauli is good";
    	
    	string ans = reverseWords(str);
    	
    	cout<<ans;
    	
    	
	}

