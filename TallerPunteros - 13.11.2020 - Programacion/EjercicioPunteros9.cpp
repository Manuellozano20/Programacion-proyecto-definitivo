#include <iostream>
#include <math.h>
#include <stdlib.h>   
#include <time.h>       

using namespace std;

int main()
{
    int n;
    cout<<"en pantalla le mostrara la matriz identidad"<<endl;

    cout<<"Por favor ingrese el numero de filas y columnas de la matriz identidad"<<endl;
    cin>>n;
    int Matriz1[n][n];
    int *pMatriz1=&Matriz1[0][0];
    cout<<endl<<endl<<"la matriz identidad es ="<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if (i==j)
           {
               pMatriz1[i*n+j]=1;
           }
           else 
           {
               pMatriz1[i*n+j]=0;
           }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<pMatriz1[i*n + j]<<" ";
        }cout<<endl;
    }

}