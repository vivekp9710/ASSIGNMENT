#include<iostream>
using namespace std;
class cricketer{
	
	protected:
		string name="abc";
		int age =25;
	public:
	};
	class batsman : public cricketer{
		int t_r;
		int avg;
		int b_p;
		int i;
		
		public:
	void inp(int innings){
		
		i=innings;
		cout<<"total run";
		cin>>t_r;
		
		cout<<"best perfomance";
		cin>>b_p;
		
		
	}		
	
	void average(){
	
	    avg = t_r/i;
	    
}
    void display(){
    	
    	cout<<"name ="<<name<<endl;
    	cout<<"age = "<<age<<endl;
    	cout<<"total runs"<<t_r<<"in"<<i<<"innings."<<endl;
    	cout<<"average ="<<avg<<endl;
    	
	}
};
	int main(){
		
		int innings;
		cout<<"enter total innings:";
		cin>>innings;
		
		batsman obj;
		obj.inp(5);
		obj.average();
		obj.display();
		
	}
		
	
	
	
		
	
