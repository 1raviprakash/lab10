/*Write a definition of a class Rectangle using the Point class. A rectangleis specified by
 two corner points (bottom left and top right). The sides of the rectangle are parallel to 
the coordinate axes. The implementation of the class should be as follows: 
The private data members of the class include all 4 corner points of the rectangle.There
 are two constructors: one takes two points as arguments and creates a rectangle with the 
first point as the bottom left corner and the second as the top right corner,the other (default)
constructor creates a rectangle with the corners (0,0), (1,0), (0,1), (1,1). 

Hint: use functions Set_X, Set_Y from the class Point to set the values of the corner points. 
The print member function prints all 4 corners of the rectangle, using the member function print
of the class Point. Test the class Rectangle in main(), demonstrate that all member functions
work as specified. 

Exercise 4.3 
Add two private member functions side1, side2 to the class Rectangle to compute the lengths 
of the two sides. Using this function, write a public member function to compute the area of
the rectangle. */
//library
#include<iostream>
using namespace std;
class point 
	{
	//X,Y represent coordinates of the point:
	private:
		int X,Y;
	//making it public
	public:
		point()
		{
		X=0;
		Y=0;
		}
		point(int X1,int Y1)
		{
		X=X1;
		Y=Y1;
		}
		void setX2(int X1)
		{
		X=X1;
		}
		void setY2(int Y1)
		{
		Y=Y1;
		}
		int GetX2(){
		return X;
		}
		int GetY2()
		{
		return Y;
		}
		void print()
		{
		cout<<"{"<<GetX2()<<" , "<<GetY2()<<"}"<<endl;
		}
	};

class rect
	{
	//PRIVATE
	private:
	point p1,p2,p3,p4;
	//public 
	public:
	//by default
	rect()
	{
		p1.setX2(0);
		p1.setY2(0);
		p2.setX2(1);
		p2.setY2(1);
		p3.setX2(1);
		p3.setY2(0);
		p4.setX2(0);
		p4.setY2(1);
	}

	rect(point p_1,point p_2)
	{
		p1=p_1;
		p2=p_2;
		p3.setX2(p1.GetX2());
		p3.setY2(p2.GetY2());
		p4.setX2(p2.GetX2());
		p4.setY2(p1.GetY2());
	}

	void printpoint()
	{
		cout<<"First point is :";
		p1.print();
		cout<<"Second point is :";
		p2.print();
		cout<<"Third point is :";
		p3.print();
		cout<<"Fourth point is :";
		p4.print();
	}
	private:
		int side1()
		{
		return (p2.GetX2()-p1.GetX2());
		}
		int side2()
		{
		return (p2.GetY2()-p1.GetY2());
		}
	//area of rectangle
	public:
		void A()
		{
		cout<<"Area is :"<<side1()*side2()<<endl;
		}

};




// main function
int main()
{
point p1;
point p2(4,5);
p2.print();
rect r1;
r1.printpoint();
//point of the rectangle
point p4(2,3);
point p5(9,8);
rect r2(p4,p5);
//print the coordinate
r2.printpoint();
//print the area 
r2.A();
//terminating the program
return 0;
}
