#include <iostream>
#include <math.h>
#include <stdlib.h>   
#include <time.h>       

using namespace std;

int main()
{
    int nf,nc, a, b, f ,c, contador=0, j, t, contadoroc=0;
    cout<<"Ingrese las filas de su parqueadero"<<endl;
    cin>>nf;
    
    cout<<"Por favor ingrese las columnas"<<endl;
    cin>>nc;
    int matrizA[nf][nc];
    for (int i=0; i< nf; i++)
    {
        for (int j=0; j< nc; j++)
        {
            matrizA[i][j] = 0;
        }
    }
    for (int i=0; i<4; i++)
    {
        cout<<"Ingrese la opcion que desea"<<endl;
        cout<<"1. Ver estado del parquedo"<<endl;
        cout<<"2. Ingresar un vehiculo"<<endl;
        cout<<"3. ver cuantos espacios libres hay"<<endl;
        cin>>a;
        switch (a)
        {
            case 1:
                for(int i=0;i<nf;i++)
                {
                    for(int j=0;j<nc;j++)
                    {
                        cout<<matrizA[i][j]<<" ";
                    }cout<<endl;
                }
            break;
            case 2:
                cout<<"Recuerde que:"<<endl;
                cout<<"0. espacio libre"<<endl;
                cout<<"1. Moto"<<endl;
                cout<<"2. Auto sedan 5 puestos"<<endl;
                cout<<"3. Auto de 7 pasajeros"<<endl;
                cin>>c;
                cout<<"Ingrese la posicion de la fila en la que ingresa el vehiculo"<<endl;
                cin>>i;
                cout<<"Ingrese la posicion de la columna en la que ingresa el vehiculo"<<endl;
                cin>>j;
                matrizA[i][j] = c;
            break;
            case 3:
            for (int i=0; i< nf; i++)
            {
                for (int j=0; j< nc; j++)
                {
                    if (matrizA[i][j] == 0)
                    {
                        contador=contador+1;
                    }
                }
            }        
            cout<<"El numero de parqueaderos libres es de "<<contador<<endl;
            contador=0;
            break;
        }
        cout<<"Desea terminar por hoy?, presione 5"<<endl;
        cin>>i;
    }
}