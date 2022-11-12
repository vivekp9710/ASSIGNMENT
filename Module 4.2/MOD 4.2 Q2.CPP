#include<iostream>
using namespace std;
class bank{
	
	char name[30];
	int a_n;
	char type[10];
	int balance;
	
	public :
		void assign(){
		
		
		cout<<"enter the name:";
		cin>>name;
		cout<<"enter accoutn no:";
		cin>>a_n;
		cout<<"enter account type:";
		cin>>type;
		cout<<"enter the balance:";
		cin>>balance;
	}
		
		
		
		void display(){
			cout<<"\n"<<"detail..."<<"\n";
			cout<<"name:"<<name<<"\n";
			cout<<"account number:"<<a_n<<"\n";
			cout<<"type:"<<type<<"\n";
			cout<<"balance:"<<balance<<"\n";
			
			}
			
			void deposit(int x){
				balance=balance+x;
				
				}
			int check_b()
			{
			
			cout<<"balance:"<<balance<<"\n";
			
			}
		};
		
		int main(){
			
			bank detail;
			
	        detail.assign();
	
	     int dep ;
	     
	     cout<<"\n"<<"Enter deposit amount : ";
	     cin>>dep;
	     
	         detail.deposit(dep);
	
        	detail.check_b();
	
	       detail.display();
}
		
