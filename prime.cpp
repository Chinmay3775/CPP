#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
		int n,count,i;
		cout<<"Enter the number to check if it is prime number:";
		cin>>n;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			count++;
		}
		if(n==1||n==0)
		
		cout<<endl<<n<<" is not a prime number";
		else if(count>2)
		cout<<endl<<n<<" is not a prime number";
		else
		cout<<endl<<n<<" is a prime number";
}
