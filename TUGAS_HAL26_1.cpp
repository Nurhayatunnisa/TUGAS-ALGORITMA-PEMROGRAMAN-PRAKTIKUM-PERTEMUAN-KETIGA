#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;


int main()
{
	
int bilangan;

//masukan bilangan
cout<<"masukan bilangan:"; cin>>bilangan; 
string message;
message = bilangan%2==0 ? "bilangan genap" : "bilangan ganjil";
cout<<message;
return 0;
}
