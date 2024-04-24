#include<iostream>
#include<iomanip>
using namespace std;
class complex
{
      int real,imag;
      public:
                  void getdata();
                  void operator -();
                  void operator ++();
                  void operator ++(int);
                  complex operator+(complex ob);
                  complex operator-(complex ob);
                  void display();
};

void complex :: getdata()
{     
      cout<<"Enter the value of 'a' & 'b' in complex number";
      cin>>real>>imag;
      
}
 void complex::operator-()
{
      real=-real;
      imag=-imag;
}
void complex::operator++()
{
      ++real;
      ++imag;
}
void complex::operator++(int)
{
      real++;
      imag++;
}
complex complex::operator+(complex ob)
{
      complex t;
      t.real=real+ob.real;
      t.imag=imag+ob.imag;
      return (t);
}
complex complex::operator-(complex ob)
{
      complex t;
      t.real=real-ob.real;
      t.imag=imag-ob.imag;
      return (t);
}
void complex::display()
{
      cout<<real<<"+"<<imag<<"i"<<endl;
}
int main()
{
      complex obj1,obj2,result,result1;
      obj1.getdata();
      obj2.getdata();
      cout<<"Input values \n";
      obj1.display();
      obj2.display();
      result=obj1+obj2;
      result1=obj1-obj2;
      cout<<"Result \n";
      result.display();
      result1.display();
      ++obj1;
      obj2++;
      cout<<"After increment:\n";
      obj1.display();
      obj2.display();
      -obj1;
      -obj2;
      cout<<"After negation:\n";
      obj1.display();
      obj2.display();
      return 0;
}

