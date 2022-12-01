//Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;
#define N 2
class Matrix{
	
	private:
		
	int a[10];
	
	public:
		void acceptvalue(){
		for(int i=0; i<N; i++){
			
			cout<<"enter the Matrix value:";
		    cin>>a[i];	
		}
		
		}
		void display(){
			
			for(int i=0;i<N;i++){
				cout<<a[i]<<"\t";
			}
			cout<<endl;
		}
		void operator+(Matrix m)
		{
			int temp[10];
			
			for(int i=0;i<N;i++ ){
				temp[i]=a[i]+m.a[i];
			}
			cout<<"sum Matrix:";
			
			for(int i=0;i<N;i++){
				cout<<temp[i]<<"\t";
			}
		}
		
	};
	
	int main(){
		
		Matrix val1;
		Matrix val2;
		
		cout<<"enter Matrix 1 value :-"<<endl;
		val1.acceptvalue();
		
		cout<<"enter Matrix 2 value :- "<<endl;
		val2.acceptvalue();
		
		cout<<"Matrix 1 value :-"<<endl;
		val1.display();
		
		cout<<"Matrix 2 value :-"<<endl;
		val2.display();
		
		val1+val2;
	}
