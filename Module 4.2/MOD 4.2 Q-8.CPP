#include<iostream>
using namespace std;
class A{
	
	int a,b;
	public:
		void cal(){
			
			cout<<"enter a:";
			cin>>a;
			cout<<"enter b:";
			cin>>b;
			cout<<"sum"<<a+b<<endl;
		}
		void cal(double x,int y){
			cout<<"sub:"<<x-y<<endl;
			
		}
		void cal(int x,int y){
			cout<<"mul:"<<x*y<<endl;
		}
		void cal(int x,double y){
			cout<<"div:"<<x/y<<endl;
		}
};
		int main(){
			
			A a;
			a.cal();
			a.cal(10.2,2);
			a.cal(10,20);
			a.cal(10,2.5);
			
		}

