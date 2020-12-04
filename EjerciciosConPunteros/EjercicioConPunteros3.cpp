#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main ()
{ 
    int Escalar;
    cout<<"digite el escalar para multplicar la matriz"<<endl;
    cin>>Escalar;
    int arreglo[50];
    int *parreglo=&arreglo[0];
    for (int i = 0; i < 50; i++)
    {
        parreglo[i]=1 + rand()% 50;
        cout<<parreglo[i]<<" ";
    }
    cout<<endl<<"el arreglo multiplicado por el escalar es"<<endl;
    for (int i = 0; i < 50; i++)
    {
       cout<<parreglo[i]*Escalar<<" ";
    }
    
    



    
}
