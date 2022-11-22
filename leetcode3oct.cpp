#include<bits/stdc++.h>
using namespace std;
int count_num(int ind,string num)
      {   int count=0;
          string ch=to_string(ind);
          
       
          for(int i=0;i<num.size();i++)
          {
              if(ch[0]==num[i])  
              {                                     
                  count++;
              }
              
          }return count;
      }
    bool digitCount(string num) 
    {
        for(int j=0;j<num.size();j++)
        {      cout<<count_num(j,num);
            if(num[j]!=count_num(j,num))
            {
                return false;
            }
        }return true;
        
    }
int main()
{   
    string num="1210";
    cout<<digitCount(num);
	
}    
