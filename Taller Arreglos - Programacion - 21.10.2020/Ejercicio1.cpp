#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;
 
int main()
{
    int a;
    srand(time(NULL));
    cout<<"Ingrese el tamaño de su arreglo"<<endl;
    cin>>a;
    int arreglo[a];
    for(int i=0; i<=(a-1);i++)
    {
        arreglo[i] = 1 + rand() % (100 - 1);
    }
    cout<<"Su arreglo: "<<endl;
    for (int i=0; i<=(a-1); i++)
    {
        cout<<arreglo[i]<<" ";;
    }
    return 0;
}