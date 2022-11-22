#include<bits/stdc++.h>
using namespace std;
string sorts(string s) 
    {
        map<int,string> umap;
        string temp = "";
        for(int i=s.size()-1;i>=0;i--)
        {   
            while(s[i]!=' ')
            {
                temp = temp + s[i];
            }
            reverse(temp.begin(),temp.end());
            int key = (int)temp[temp.size()-1];
            umap[key]=temp;
            temp="";
        }
        
        string ans="";
        
        for(auto i : umap)
        {
            ans = ans+i.second;
        }
        
        return ans;
    }
int main()
{
	string v = "is2 sentence4 This1 a3";
	
	cout<<sorts(v);
	
}
