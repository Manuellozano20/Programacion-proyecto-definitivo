#include <iostream>

using namespace std;

int main()
{
    int Arreglo1[50];
    int *pArreglo1 = &Arreglo1[0];
    for (int i=0; i<50; i++)
    {
        pArreglo1[i] = 1*50;
    }
    cout<<"Arreglo 1"<<endl;
    for (int i=0; i<50; i++)
    {
        cout<<pArreglo1[i]<<" ";
    }

}
