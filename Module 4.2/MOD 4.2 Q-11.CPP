//wap to calculate the area of the circle,rectangle and triangle using function overloading

//rectangle=length*breadth
//triangle=height *base
//circle=pi*r*r
#include<iostream>
using namespace std;

class A{
	
	public:
		
		void area(int length,int breadth){
			cout<<"area of rectangle :"<<length*breadth<<endl;
		}
		void area(double height,double base){
			cout<<"area of triangle:"<<0.5*base*height<<endl;
		}
		void area(int r){
			cout<<"area of circle :"<<3.14*r*r<<endl;
		}
};

     int main(){
     	
     	A a;
     	a.area(10,20);
     	a.area(1.5,2.5);
     	a.area(2);
	 }
