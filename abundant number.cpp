#include<iostream>
#include<iomanip>
using namespace std;

class abundant
{
	private: int number,i;
			int sum;
	public:
		abundant()
		{
			sum=0;
		}
		void getdata()
		{
			cout<<"Enter the number: ";
			cin>>number;
		}
	
		void cal()
		{
			for(i=1;i<number;i++)
			{
				if(number%i==0)
				{
					cout<<i<<"\t";
					sum=sum+i;
				}
			}
		}
	
	void display()
	{
		cout<<endl<<"The sum of divisor is "<<sum;
		if(sum>number)
		cout<<"\nThe Number "<<number<<" is abundant number";
		else
		cout<<"\nThe Number "<<number<<"  is NOT an abundant number";
	}
};
int main()
{
	abundant a;
	a.getdata();
	a.cal();
	a.display();
}
