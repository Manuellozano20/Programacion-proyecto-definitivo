#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main ()
{ 
    int Pos, Num=0;
    cout<<"por favor digite de cuantas posiciones quiere el arreglo"<<endl;
    cin>>Pos;
    int arreglo[Pos];
    int *parreglo=&arreglo[0];
    for (int i = 0; i < Pos; i++)
    {
       parreglo[i]=1 + rand()% 50;
        if (parreglo[i]>Num)
       {
           Num=parreglo[i];
       }  

    }
    
    for (int i = 0; i < Pos; i++)
    {
       cout<<parreglo[i]<<" "; 

    }cout<<endl;

    cout<<"el numero mayor es"<<endl;
    cout<<Num;
    


    
}