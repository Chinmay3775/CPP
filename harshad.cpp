#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	
    int n,rem,sum;
    cout<<"Enter the number: ";
    cin>>n;
    
    while(n!=0)
    {
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }
 
    cout<<"The sum of the digits of number is : "<<sum;
    if(n%sum==0)
    {
    	cout<<"\nThe number is a Harshad Number";
	}
	else
    {
    	cout<<"\nThe number is not a Harshad Number";
	}
	
}
