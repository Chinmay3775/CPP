#include<iostream>
#include<iomanip>
using namespace std;
class queue
{
	private:
			int array[10],front,rear,i,size;
	public:
		void elements()
		{	
			front=rear=-1;
			cout<<"Enter size of array";
			cin>>size;
			cout<<"Enter Elements in array"<<endl;
			for(i=0;i<size;i++)
			{
				cin>>array[i];
				rear=i;
				front=0;
			}
		}
		void enqueue()
		{	
			int new_ele;
			cout<<"Enter the element you want to insert";
			cin>>new_ele;
			if(rear==9)
			cout<<"Queue overflow";
			else
			array[size]=new_ele;
			size++;
			rear++;
			i=0;
		}
		void dequeue()
		{
			if(front==rear==-1)
			cout<<"Queue underflow";
			else
			front++;
			
		}
		void display()
		{
			int i;
			for(i=front;i<size;i++)
			{
				cout<<array[i]<<setw(10);
			}
		}
		void menu()
		{
			int opt;
			while(1)
			{
				cout<<"\n1.enqueue\n2.dequeue\n3.Display\nENTER OPTION";
				cin>>opt;
				if(opt<4)
			{
				switch(opt)
			{
				case 1: {enqueue();break;}
				case 2: {dequeue();break;}
				case 3:{display();break;}
			}
			}
			}
		}
};
int main()
{

queue a;
a.elements();
a.menu();
}
