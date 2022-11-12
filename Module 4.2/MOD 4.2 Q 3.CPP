#include<iostream>
using namespace std;

inline float mul(int x, int y){
	return (x*y);
	
	
}
int main(){
	float x,y;
	cout<<"enter the value of x:";
	cin>>x;
	cout<<"enter the value of y:";
	cin>>y;
	cout<<mul(x,y)<<"\n";
}
