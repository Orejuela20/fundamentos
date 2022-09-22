
//creado por:orejuela jefferson
//fecha:22-9-2022
#include<iostream>
using namespace std;
int main()

{
	int j=0,k;
	float r,m=0;
	cout<<"ingrese el limite k="; cin>>k;
	do{
	cout<<"ingrese el numero r="; cin>>r;
	j=j+1;
	m=m+r;

	}while(j<k);
	cout<<"se ingresaron "<<k<<"numeros "<<"que sumaron "<<m<<endl;
	return 0;

}
