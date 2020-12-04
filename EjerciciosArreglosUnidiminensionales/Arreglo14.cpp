#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main() 
{
int i=0, arreglo[24], num, hora;
srand(time(NULL));
for ( i = 0; i < 24; i++)
{
 num=rand()%34;
 arreglo[i]=num;
 cout<<arreglo[i]<<" "<<endl;
}
cout<<"Por favor ingrese la hora de la cual quiere conocer la temperatura"<<endl;
cin>>hora;
if (hora>=0 & hora<24)
{
 cout<<"La temperatura a esa hora era de "<<arreglo[hora]<<" grados centigrados"<<endl;
}
else
{
 cout<<"El dato ingresado no es permitido"<<endl;
}


return 0;
}

