#include<iostream>
#include<conio.h>
using namespace std;
 
main()
{
float a,b,c,avrage;
cout<<"please enter three numbers:\n\n";
cout<<"number1=";
cin>>a;
cout<<"\n"<<"number2=";
cin>>b;
cout<<"\n"<<"number3=";
cin>>c;
avrage=(a+b+c)/3;
cout<<"\n\n"<<"the avrage of  "<<a<<','<<b<<','<<c<<"=";
cout<<avrage;
cout<<"\n\n\n"<<"press any key to exit...";
getch();
return 0;
}
