#include <iostream>
#include <stdlib.h>     
#include <time.h>       

using namespace std;
void llenarUnos(float *pA, int n);
void NumeroPares(float *pA, int n);
void MultiplicacionEscalar(float *pA, int n, int b);
void PedirNumeros(float *pA, int n, int c);
void NumeroMayor(float *pA, int n, int valmay);
void SumaImpares (float *pA, int n, int suma);
void ArregloAleatorioPares(int *pA, float *pB, int n);
void NumeroMenor(float *pA, int n, int valmin);
void llenarIdentidad(float *pA, int n);
void sumarMatriz(float *pA, float *pB, float *pC, int n);
int main ()
{

}
void llenarUnos(float *pA, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            pA[i*n+j] = 1;
        }
    }
}
void NumerosPares(float *pA, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            pA[i*n+j] = i*2;
        }
   }
}
void MultiplicacionEscalar(float *pA, int n , int b)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            pA[i*n+j] = b*i;
        }
    }
}
void PedirNumeros(float *pA, int n, int c)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Ingrese el numero para su arreglo"<<endl;
            cin>>c;
            pA[i*n+j] = c;
        }
    }
}
void NumeroMayor(float *pA, int n, int valmay)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            pA[i*n+j] = rand() % 100 + 1;
            if (pA[i*n+j]>valmay)
            {
                valmay = pA[i+n*j];
            }
        }
    }
}
void SumaImpares (float *pA, int n, int suma)
{
  for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (i % 2 != 0 )
            {
                pA[i*n+j] = i;
                suma=i+0;
            }
            
        }
    }
}
void ArregloAleatorioPares(int *pA, float *pB, int n)
{
    srand (time(NULL));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            pA[i*n+j] = rand() % 100 + 15;
            if (pA[i*n+j] % 2 != 0)
            {
                pB[i*n+j] = pA[i*n+j];
            }
        }
    }
}
void NumeroMenor(float *pA, int n, int valmin)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            pA[i*n+j] = rand() % 100 + 1;
            if (pA[i*n+j]<valmin)
            {
                valmin = pA[i+n*j];
            }
        }
    }
}
void llenarIdentidad(float *pA, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i == j)
            {
                pA[i*n+j] = 1;
            }
            else
            {
                pA[i*n+j] = 0;
            } 
        }
    }
}
void sumarMatriz(float *pA, float *pB, float *pC, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            pC[i*n+j] = pA[i*n+j] + pB[i*n+j];
        }
    }
}