#include <iostream>
using namespace std;
int main ()
{
    int a,b, aiu, casmed;
    cout<<"Ingrese el tamaño de su arreglo"<<endl;
    cin>>a;
    int arreglo[a];
    for (int i=0; i<a; i++)
    {
        cout<<"Ingrese dato"<<endl;
        cin>>b;
        arreglo[i] = b;
    }
    for (int i=0; i<a; i++)
    {
        for (int j=0; j<a; j++)
        {
            if (arreglo[j] > arreglo[j+1])
            {
                aiu = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aiu;
            }   
        }
    }
    for (int i=0; i<a; i++)
    {
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;
    if (a % 2 == 0)
    {
        casmed=(a/2)-1;
        cout<<"La mediana es "<<arreglo[casmed]<<endl;
    }
     if (a % 2 != 0)
    {
        casmed=(a/2);
        cout<<"La mediana es "<<arreglo[casmed]<<endl;
    }
    return 0;
}