#include <iostream>
#include <math.h>     

using namespace std;

int main()
{
int Nfc;
float Datos;
cout<<"Este programa le permitira generar una matriz identidad de nxn"<<endl;
cout<<"A continuacion ingrese de cuantas filas y columnas quiere para su arreglo"<<endl;
cin>>Nfc;
int Matriz[Nfc][Nfc];
for ( int i = 0; i < Nfc; i++)
{
    for ( int j = 0; j < Nfc; j++)
    {
        if (i==j)
        {
            Matriz[i][j]=1;
        }
        else
        {
            Matriz[i][j]=0;
        }
        
    }
}
for ( int i = 0; i < Nfc; i++)
{
    for ( int j = 0; j < Nfc; j++)
    {
        cout<<Matriz[i][j]<<" ";
    }cout<<endl;
    
}
return 0;
}

