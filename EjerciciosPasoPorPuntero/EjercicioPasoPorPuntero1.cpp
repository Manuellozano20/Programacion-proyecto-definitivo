#include <iostream>
using namespace std;

void  A( int *pArreglo,int n);
int main ()
{
 int n=100;
 int Arreglo[n];
 A(&Arreglo[0],n);

}
void  A( int *pArreglo,int n)
{
    for(int i=0;i<99;i=i+2)
    {
        pArreglo[i*n]=i+2;
        cout<<pArreglo[i*n]<<",";
        
    }
    
}