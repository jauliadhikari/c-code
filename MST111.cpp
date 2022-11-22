#include <iostream>

using namespace std;

int main()

{

int x = 100;

auto check = [=]() 

    {

x = 10;

};

check();

cout<<"Value of a: "<<x<<endl;

return 0;

}
