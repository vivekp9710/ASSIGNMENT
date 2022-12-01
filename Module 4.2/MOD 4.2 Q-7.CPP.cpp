#include<iostream>
using namespace std;
class student{
	
	protected:
		int r_n;
		
	public:
		int rollno(int x){
			cout<<"\n";
			r_n=x;
			cout<<"roll no:-"<<r_n<<endl;
		}
	
	
};
    class test : public student{
    	
		 protected:
    	 int maths,science;
    	 
    	 public:
    	 	int obtainmarks(){
			 cout<<"enter maths marks";
			 cin>>maths;
			 cout<<"enter science marks";
			 cin>>science;
			 }
	};
   class result : public test{
   	
   	protected :
   		    int t;
   		
   	public:
   			
   			int total()
   			{
   				
   				t = maths + science;
   				cout<<"total marks="<<t<<endl;
			   }
			   
			int display()
			{
				
				cout<<"rollno.:-"<<r_n<<endl;
				cout<<"obtain marks:-"<<endl;
				cout<<"\t"<<"maths: "<<maths<<endl;
				cout<<"\t"<<"science :"<<science<<endl;
				cout<<"total :"<<t<<endl;
				
			}
		   
		   
   };
   
           int main(){
           	result std1;
           	std1.rollno(1);
           	std1.obtainmarks();
           	std1.total();
           	std1.display();
           	
           	result std2;
           	std2.rollno(2);
           	std2.obtainmarks();
           	std2.total();
           	std2.display();
           	
		   }   
   
   
   
