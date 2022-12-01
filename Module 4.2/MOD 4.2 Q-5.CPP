//Create a class person having members name and age. Derive a class student
//having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance) 




#include<iostream>
#include<string.h>
using namespace std;
class person{
	private:
		string name;
		int age;
		
	public:
		void per(int a, string n){
			name=n;
			age=a;
			
		}
		void d_p(){
			
			cout<<"name:"<<name<<endl;
			cout<<"age:"<<age<<endl;
			
		}
		 
};


class student :  public person{
	
	private:
		
		float percentage;
	
	public:
		
		void detail(int a, string n, float p)
	{
		percentage=p;
		per(a,n);
		
	}
	
    void d_s(){
		
		cout<<"!.....student details.....!\n"<<endl;
		d_p();
		cout<<"percentage is:"<<percentage<<endl;
		
		
	}
};

  class teacher : public person{
	  	private :
		float salary;
  	
	public:
	
    void info(int a, string n, float s){
		
		salary=s;
		per(a,n);
	}	
	
	void d_t(){
		
		cout<<"!...teacher details....!\n"<<endl;
		d_p();
		cout<<"salary is :"<<salary<<endl;
}
	};
	
	int main(){
//		int detail();
		//int info();
		
		student s1;
		s1.detail(30,"vkp",75.00);
		s1.d_s();
		
	    teacher t1;
		t1.info(25,"xyz",25000);
		t1.d_t();
		
}
		
		

	
