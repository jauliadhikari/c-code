//compile time polymorphism
#include<bits/stdc++.h>
using namespace std;
class jauli
{
	public:
		void adhikari()
		{
			cout<<"it is my sirname";
		}	
		void adhikari(int age)
		{
			cout<<"it is my age"<<age<<endl;
		}
};
class jauli1 : public jauli
{
	public:
		void adhikari1()
		{
			cout<<"it is my sirname in class 2";
		}
		void adhikari1(int age,int uid)
		{
			cout<<"it is my age"<<age<<endl;
		}
};


int main()
{
	jauli1  obj;
	obj.adhikari(5);
}
