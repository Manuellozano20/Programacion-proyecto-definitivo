#include <iostream>
#include <math.h>     

using namespace std;

int main()
{
int Cp, Fp, Estado, EL=0, M=0, AS=0, A=0;
cout<<"Este programa permitira administrar un parqueadero"<<endl;
cout<<"A continuacion ingrese cuantas filas tiene su parqueadero"<<endl;
cin>>Fp;
cout<<"A continuacion ingrese cuantas columnas tiene su parqueadero"<<endl;
cin>>Cp;
int MatrizP[Fp][Cp];
cout<<"Ingrese un numero para definir en que estado esta cada lugar lugar, "<<endl<<"Tener en cuenta que: "<<endl<<"0.Espacio Libre "<<endl<<"1.Moto "<<endl<<"2.Auto Sedan 5 puestos "<<endl<<"3.Auto de 7 pasajeros "<<endl;
cout<<"A continuacion rellene cada uno de los puestos teniendo en cuenta los anteriores parametros"<<endl;
for (int i = 0; i < Fp; i++)
{
    for (int j = 0; j < Cp; j++)
    {
        cin>>Estado;
        if (Estado==0 || Estado==1 || Estado==2 || Estado==3)
        {
            MatrizP[i][j]=Estado;
            if (Estado==0)
            {
                EL=1+EL;
            }
            if (Estado==1)
            {
                M=1+M;
            }
            if (Estado==2)
            {
                AS=1+AS;
            }
            if (Estado==3)
            {
                A=1+A;
            }
        }
        else
        {
            cout<<"Dato no valido, recuerde los parametros";
        }
        
        
    }
    
}
for (int i = 0; i < Fp; i++)
{
    for (int j = 0; j < Cp; j++)
    { 
     cout<<MatrizP[i][j]<<" ";
    }cout<<endl ;    
      
}
cout<<"Este es el estado de su parqueadero actualmente: "<<endl<<"Espacios Libres: "<<EL<<endl<<"Motos: "<<M<<endl<<"Autos Sedan 5 puestos: "<<AS<<endl<<"Autos 7 pasajeros: "<<A<<endl; 
return 0;
}