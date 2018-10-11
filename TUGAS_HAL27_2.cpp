#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main ()
{
	int suhu, nilai_X;
	//memasukkan variabel
	
	cout<<"masukkan suhu : "; cin>>suhu;
	cout<<endl;
	cout<<"masukkan nilai X : "; cin>>nilai_X;
	
	//menghitung variabel
	if ((suhu > nilai_X)) 
		cout<<"suhu panas";
		
	if ((suhu <= nilai_X)) 
		cout<<"suhu dingin";	 
	return 0;
}
