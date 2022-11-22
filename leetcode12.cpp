#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool find(char ch)
    {
        string str1="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        
        for(int i=0;i<str1.size();i++)
        {
            if(ch==str1[i] )
            {
                return true;
            }
        }
        return false;
    }
    string rev(string ss)
    {
        int s=0;
        int e=ss.size()-1;
        while(s<=e)
        {
            if(find(ss[s]) && find(ss[e]))
            {
                swap(ss[s++],ss[e--]);
            }
            if(find(ss[s]) && find(ss[e])==false)
            {
                e--;
            }
            if(find(ss[s])==false && find(ss[e]))
            {
                s++;
            }
        }
        return ss;
    }
public:
    string reverseOnlyLetters(string s) 
    {
        return rev(s);
    }
};
int main()
{
	string s;
	cin>>s;
	Solution obj;
	string str=obj.reverseOnlyLetters(s);
	cout<<str;
}


