#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
#define f(x)1*x*x*x+2*x+5
#define g(x)3*x*x+2
using namespace std;
int main(){
	float x0, x1, f0, f1, g0, e;
	int step = 1, N;
	cout<< setprecision(6)<< fixed;
	/* Introducción de  las entradas: */
	cout<<"Coloque aqui el intervalo inicial: ";
	cin>>x0;
	cout<<"Coloque aqui la tolerancia: ";
	cin>>e;
	cout<<"Número de iteraciones: ";
	cin>>N;
	/* Nombre del método: */
	cout<<"Desarrollo en base al metodo de Newton Raphson"<<endl;
	do
	{
		g0=g(x0);
		f0=f(x0);
		if(g0==0.0){
			cout<<"ERROR.";
			exit(0);
		}
		x1=x0-f0/g0;
		cout<<"Iteracion - "<<step<<":\t x = "<<
			setw(10)<<x1<<" y f(x)= "<<setw(10)<<f(x1)<<endl;
		x0=x1;
		step=step+1;
		if(step>N)
		{
			cout<<"NO CONVERGE";
			exit(0);
		}
		f1=f(x1);
	}
	while(fabs(f1)>e);
	cout<<endl<<"El siguiente resultado es a nuestra raiz de la ecuacion: "<< x1;
	return 0;
}