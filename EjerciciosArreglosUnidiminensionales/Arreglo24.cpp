#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int CDatos;
float Definitivo, Exponente,Total1=1, Num;
cout<<"Bienvenido al programa que le permitira calcular la media geometrica de un grupo de datos"<<endl;
cout<<"Ingrese la cantidad de datos que obtuvo"<<endl,
cin>>CDatos;
int Arreglo[CDatos];
cout<<"A continuacion ingrese los datos"<<endl;
for ( int i = 0; i < CDatos; i++)
{
cin>>Num;
Arreglo[i]=Num;
}
for ( int i = 0; i < CDatos; i++)
{
 Total1=Total1*Arreglo[i];
}
Definitivo=pow(Total1,1/CDatos);
cout<<"La media geometrica del grupo de datos que ingreso es "<<Definitivo<<endl;
//cout<<Total1<<" ";
return 0;
}