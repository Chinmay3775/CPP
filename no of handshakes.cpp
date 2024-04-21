#include<iostream>
#include<iomanip>
using namespace std;
class handshakes
{
	public:int n,no_of_handshakes;
	
	public:
	 handshakes()
	{
		cout<<"Enter the value of 'N' to find the Number of handshakes: ";
		cin>>n;
		no_of_handshakes=(n*(n-1))/2;
		cout<<"The number of handshakes are :"<<no_of_handshakes<<endl;
		handshakes();
	}
};
int main()
{
	handshakes a;
}
