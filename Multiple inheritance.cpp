#include<iostream>
#include<iomanip>
using namespace std;
class Mango
{
	public: int no_of_mangoes;
	
	public:void function_A()
			{
				cout<<"Enter the number of mangoes: ";
				cin>>no_of_mangoes;
			}
};
class Apple
{
	public: int no_of_apple;
	public:void function_B()
			{
				cout<<"\nEnter the number of Apples: ";
				cin>>no_of_apple;
			}
};
class Fruits: public Mango,public Apple
{
	public: int no_of_fruits;
	public:void function_C()
			{
				no_of_fruits=no_of_mangoes+no_of_apple;
				cout<<"\nTotal number of Fruits: "<<no_of_fruits;
			}
};

int main()
{
	Mango a;
	a.function_A();
	Apple b;
	b.function_B();
	Fruits c;
	c.no_of_mangoes=a.no_of_mangoes;
	c.no_of_apple=b.no_of_apple;
	c.function_C();
}


