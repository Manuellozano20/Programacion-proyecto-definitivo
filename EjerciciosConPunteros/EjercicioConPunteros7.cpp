#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main ()
{ 
    int Pos, num=0;
    cout<<"por favor digite de cuantas posiciones quiere el arreglo"<<endl;
    cin>>Pos;
    int arreglo[Pos];
    int *parreglo=&arreglo[0];
    for (int i = 0; i < Pos; i++)
    {
       parreglo[i]=1 + rand()% 50;
           
    }
    
    for (int i = 0; i < Pos; i++)
    {
       cout<<parreglo[i]<<" "; 

    }cout<<endl;
    cout<<"los numeros pares son"<<endl;
    for (int i = 0; i < Pos; i++)
    {
         if (parreglo[i]%2==0)
        {
             cout<<parreglo[i]<<" ";
        }
    }
    

}
    