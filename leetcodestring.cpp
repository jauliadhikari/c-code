 #include<bits/stdc++.h>
 using namespace std;
 
 string decodeMessage(string key, string message) 
    {
        unordered_map<char,char> umap;
        char ch = 'a';
        string alpha = "abcdefghijklmnopqrstuvwxyz";
        int index =0;
        for( auto i:key)
        {
              if(i!=' ')
              {
                  umap[i]=alpha[index++];
                  
              }
        }
        for(auto it : umap)
        {
        	cout<<it.first <<"-->"<<it.second<<endl;
		}
        
        umap[' '] = ' ';
        string str="";
        for(auto i:message)
        {
            str=str+umap[i];
        }
        return str;
    }
int main()
{
	string key = "the quick brown fox jumps over the lazy dog", message = "vkbs bs t suepuv";
	cout<<decodeMessage(key,message);
	
}
