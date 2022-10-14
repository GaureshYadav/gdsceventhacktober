#include<iostream>
using namespace std;
class Add{
	int x,y;
	public:
	Add(){
		cout<<"Enter first number:- ";
		cin>>x;
		cout<<"Enter Second number:- ";
		cin>>y;
	}
	void putdata(){
		int z;
		z=x+y;
		cout<<"Sum of "<<x<<" and "<<y<<" is "<<z<<".";
	}
};
int main(){
	Add A1;
	A1.putdata();
}
