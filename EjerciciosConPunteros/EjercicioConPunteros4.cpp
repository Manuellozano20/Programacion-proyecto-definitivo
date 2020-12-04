#include<iostream>

using namespace std;

int main ()
{ 
    int arreglo[10];
    int *parreglo=&arreglo[0];
    int Numeros;
    for (int i = 0; i < 10; i++)
    {
       cout<<"por favor digite los 10 numeros"<<endl;
       cin>>Numeros;
       parreglo[i]=Numeros;
      

    }
    for (int i = 0; i < 10; i++)
    {
       
       cout<<parreglo[i]<<" ";

    }
    



    
}
