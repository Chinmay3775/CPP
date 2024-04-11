#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, count = 0, sum = 0, temp, digit;
	cout << "Enter the number: ";
    cin >> n;
	temp = n;
    while(temp != 0)
    {
        count++;
        temp /= 10;
    }
	temp = n;
	while(temp != 0)
    {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }
	if(sum == n)
    {
        cout << n << " is an Armstrong number." << endl;
    }
    else
    {
        cout << n << " is not an Armstrong number." << endl;
    }
main();
}

