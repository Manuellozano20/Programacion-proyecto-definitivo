#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int CDatos;
float Num;
cout<<"Bienvenido al programa que le permitira calcular el sesgo de un grupo de datos"<<endl;
cout<<"Ingrese la cantidad de datos que obtuvo"<<endl;
cin>>CDatos;
int Arreglo[CDatos];
cout<<"A continuacion ingrese los datos"<<endl;
for ( int i = 0; i < CDatos; i++)
{
cin>>Num;
Arreglo[i]=Num;
}