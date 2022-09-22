//programa basico de operaciones
//nombre: jefferson orejuela
//fecha:15-09-2022
#include<iostream>
using namespace std;
int main()
{
	float p,q,a,b,e,f;
	//ingrese los datos
	cout<<"ingrese valor de p=;";
	cin>>p;
	cout<<"ingrese valor de q=;";
	//operaciones
	cin>>q;
	a=p+q;
	b=p*q;
	e=p/q;
	f=p-q;
	//resultados
	cout<<"la suma de "<<p<<" + "<<q<<" = "<<a<<endl;
	cout<<"la multiplicacion de "<<p<<" * "<<q<<" = "<<b<<endl;
	cout<<"la division de "<<p<<" /"<<q<<" = "<<e<<endl;
	cout<<" la resta de "<<p<<" - "<<q<<" = "<<f<<endl;
	return 0 ;
}


