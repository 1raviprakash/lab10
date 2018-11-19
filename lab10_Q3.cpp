/* Q3.Create a class for rectangle that stores data of length
 and breadth and has two functions....*/
// library
#include <iostream>
using namespace std;
//Creating a class 
class rect {
	public:
	//lenth of rectangle=L
	double L; 
	//breadth of the rectangle=B
	double B;  
  	 };
int main(){
	rect rect1;	
	rect rect2;
	//area of triangle = A
	double A = 0.0;
	//perimeter  of triangle = P
	double P = 0.0;
	//content rect 1 
	cout<<"Enter the length of rectangle 1 = "<<endl;
	cin>>rect1.L;
	cout<<"Enter the breadth of rectangle 1 = "<<endl;
	cin>>rect1.B;
	//content rect 2 
	cout<<"Enter the length of rectangle 2 = "<<endl;
	cin>>rect2.L;
	cout<<"Enter the breadth of rectangle 2 = "<<endl;
	cin>>rect2.B;
	//area of rect 1
	A = 	rect1.L * rect1.B;
	cout<< "Area of rectangle 1 = "<< A <<endl; 
	//area of rect 2
	A = rect2.L * rect2.B;
	cout << "Area of rectangle 2 = " << A << endl;
	//perimeter of rect 1
	P = (rect1.L+rect1.B)*2;
	cout <<"Perimeter of rectangle1 = "<< P <<endl;
	//perimeter of rect 1
	P = (rect2.L+rect2.B)*2;
	cout <<"Perimeter of rectangle2 = "<< P <<endl;
//terminating
return 0;
}
