//programa basico de operaciones
//nombre: jefferson orejuela
//fecha:15-09-2022
#include<iostream>
using namespace std;
int main()
{
	float x,y,s,m,d,r;
	//ingrese los datos
	cout<<"ingrese valor de x=;";
	cin>>x;
	cout<<"ingrese valor de y=;";
	//operaciones
	cin>>y;
	s=x+y;
	m=x*y;
	d=x/y;
	r=x-y;
	//resultados
	cout<<"la suma de "<<x<<" + "<<y<<" = "<<s<<endl;
	cout<<"la multiplicacion de "<<x<<" * "<<y<<" = "<<m<<endl;
	cout<<"la division de "<<x<<" /"<<y<<" = "<<d<<endl;
	cout<<" la resta de "<<x<<" - "<<y<<" = "<<r<<endl;
	return 0 ;
}


