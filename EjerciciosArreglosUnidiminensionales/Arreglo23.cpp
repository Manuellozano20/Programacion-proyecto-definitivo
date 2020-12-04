#include <iostream>
#include<time.h>
#include <math.h>
using namespace std;

int main()
{
int CDatos, Num, i=0; 
float Promedio, Total1=0, Resta, RestaAcu=0, Division, Definitivo;
cout<<"Bienvenido al programa que le permitira calcular la desviacion estandar de un grupo de datos"<<endl;
cout<<"Ingrese la cantidad de datos que obtuvo"<<endl,
cin>>CDatos;
int Arreglo[CDatos];
cout<<"A continuacion ingrese los datos"<<endl;
for ( i = 0; i < CDatos; i++)
{
 cin>>Num;
 Arreglo[i]=Num;
 Total1=Arreglo[i]+Total1;
}
Promedio=(Total1/CDatos);
for ( i = 0; i < CDatos; i++)
{
 Resta=((Arreglo[i]-Promedio)*(Arreglo[i]-Promedio));
 RestaAcu=Resta+RestaAcu;
}
Division=(RestaAcu/(CDatos-1));
Definitivo=sqrt(Division);
cout<<"La desviacion estandar es "<<Definitivo<<endl;
return 0;
}