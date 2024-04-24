#include<iostream>
#include<algorithm>
using namespace std;

bool anagram(string str1, string str2);
int main()
{
	string str1;
	string str2;
	cin>>str1;
	cin>>str2;
	
	if(anagram(str1,str2))
	{
		cout<<"Strings are anagram \n";
	}
	else
	{
		cout<<"Strings are NOT anagram \n";
	}
}
bool anagram(string str1, string str2)
{
	if(str1.length()!=str2.length())
	{
	return false;
	}
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	
	str1==str2;
}
