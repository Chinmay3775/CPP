#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Person 
{
	public: 
			string name,email,phone;
	public:
			void get_data()
			{
				cout<<"Enter name \n";
				cin>>name;
				cout<<"Enter phone Number \n";
				cin>>phone;
				cout<<"Enter E-mail ID\n";
				cin>>email;
			}
		
			
};
class Student:public Person
{
	public: int roll_no;
	
	public:
			void get_student_data()
			{
				cout<<"Enter Roll Number\n";
				cin>>roll_no;
			}
			void display_student_data()
			{
				cout<<"NAME"<<setw(25)<<"ROLL NUMBER"<<setw(20)<<"Phone number"<<setw(20)<<"email"<<endl;
				cout<<name<<setw(20)<<roll_no<<setw(20)<<phone<<setw(40)<<email<<endl;	
			}
};
class Faculty:public Person 
{
	public:string salary,faculty_id,subject;
	
	
	public:	
			void get_faculty_data()
			{
				cout<<"Enter Subject:\n";
				cin>>subject;
				cout<<"Enter Faculty-ID:\n";
				cin>>faculty_id;
				cout<<"Enter Salary\n";
				cin>>salary;
			}
			void display_faculty_data()
			{
				cout<<"NAME"<<setw(25)<<"Faculty-ID"<<setw(15)<<"Subject"<<setw(20)<<"Phone number"<<setw(20)<<"email"<<setw(20)<<"Salary"<<endl;
				cout<<name<<setw(20)<<faculty_id<<setw(15)<<subject<<setw(20)<<phone<<setw(40)<<email<<setw(20)<<salary<<endl;	
			}
};
int main()
{
	Student A;
	A.get_data();
	A.get_student_data();
	A.display_student_data();
	Faculty B;
	B.get_data();
	B.get_faculty_data();
	B.display_faculty_data();
}
