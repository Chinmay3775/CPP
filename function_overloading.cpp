#include<iostream>
#include<iomanip>
using namespace std;
class Circle
{
	private:int centerX,centerY;
	        int radius;
	        float circumference,area;

	public:
	       Circle()
		{
			centerX=2;
			centerY=2;
			radius=9;
		}
		 Circle(int cx,int cy)
		{
			centerX=cx;
			centerY=cy;
			radius=10;
		}

		 Circle(int cx,int cy,int r)
                {
                	centerX=cx;
			centerY=cy;
			radius=r;
                }
		int calarea()
		{     
		      
			area=3.14*(radius*radius);
			cout<<"area: "<<area<<endl;
		}
		
		int calcircumference()
		{
		      circumference=2*3.14*radius;
		      cout<<"circumference "<<circumference<<endl;
		}
		


};
int main()
{
	Circle c1;
	c1.calarea();
	c1.calcircumference();
	Circle c2(2,3);
	c2.calarea();
	c2.calcircumference();
	Circle c3(2,3,4);
	c3.calarea();
	c3.calcircumference();
}
