
// CPP program to count white spaces in a string
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
  
// function to calculate whitespaces
void space(string& str)
{
    int count = 0;
    int length = str.length();
    for (int i = 0; i < length; i++) 
	{
        int c = str[i];
        if (isspace(c))
            count++;
    }
    cout << count;
}
  
// Driver Code
int main()
{
    string str = "Geeks for geeks";
    space(str);
    return 0;
}
