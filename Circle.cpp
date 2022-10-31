#include <iostream>
using namespace std;

int main(){
	
	const double PI = 3.14 ;
	double radius,area,perime;
	cout<<"Enter the Radius : ";
	cin>>radius;
	area = PI*radius*radius;
	cout<<"Area is :"<<area<<endl;
	perime = 2*PI*radius;
	cout<<"Perime is :"<<perime<<endl;
	cin.get();
	cin.ignore();
    return 0;
}
