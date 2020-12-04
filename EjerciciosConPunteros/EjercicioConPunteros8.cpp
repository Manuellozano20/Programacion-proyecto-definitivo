#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main ()
{ 
    int  Valormin=9999,Nf,Nc;
    srand(time(NULL));
    cout<<"por favor ingrese cuantas filas quiere"<<endl;
    cin>>Nf;
    cout<<"Por favor ingrese cunatas columnas quiere"<<endl;
    cin>>Nc;
    int   matriz[Nf][Nc];
    int *pmatriz=&matriz[0][0];
    for (int i = 0; i < Nf; i++)
    {
        for (int j = 0; j < Nc; j++)
        {
            pmatriz[i*Nf+j]= rand()%50;
            if (pmatriz[i*Nf +j]<Valormin)
            {
                    Valormin= pmatriz[i*Nf+j];
            }
        }
    }
    for (int i = 0; i < Nf; i++)
    {
        for (int j = 0; j < Nc; j++)
        {
            cout<<pmatriz[i*Nf+j]<<" ";
                    
        }cout<<endl;  
    }
    cout<<"el valor minimo es "<<endl;
    cout<<Valormin;
    
    
}