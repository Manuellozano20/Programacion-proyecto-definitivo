#include <iostream>
#include <math.h>     

using namespace std;

int main()
{
int Matriz[5][5], a=0, b=1;
float Datos;
cout<<"Este programa le mostrara los 20 primeros numeros de la sucesion de fibonacci"<<endl;
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        Matriz[i][j]=a+b;
        a=b;
        b=Matriz[i][j];
    }
    
}
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        cout<<Matriz[i][j]<<" ";
    }cout<<endl ;  
}
return 0;

}