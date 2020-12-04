#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int CDatos, C;
float Definitivo, Exponente,Total1=1, Num;
cout<<"Bienvenido al programa que le permitira calcular la media de un grupo de datos"<<endl;
cout<<"Ingrese la cantidad de datos que obtuvo"<<endl;
cin>>CDatos;
int Arreglo[CDatos];
cout<<"A continuacion ingrese los datos"<<endl;
for ( int i = 0; i < CDatos; i++)
{
cin>>Num;
Arreglo[i]=Num;
}
for (int i=0; i<CDatos; i++)
    {
        for (int j=0; j<CDatos; j++)
        {
            if (Arreglo[j] > Arreglo[j+1])
            {
                Definitivo = Arreglo[j];
                Arreglo[j] = Arreglo[j+1];
                Arreglo[j+1] = Definitivo;
            }   
        }
    }
    if (CDatos % 2 == 0)
    {
        C=(CDatos/2)-1;
        cout<<"La mediana es "<<Arreglo[C]<<endl;
    }
     if (CDatos % 2 != 0)
    {
        C=(CDatos/2);
        cout<<"La mediana es "<<Arreglo[C]<<endl;
    }
}