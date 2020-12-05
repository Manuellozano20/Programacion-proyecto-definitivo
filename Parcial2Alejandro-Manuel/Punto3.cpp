#include <iostream>
using namespace std;

long * pascal(int fila) 
{
   long * triangulo;
   triangulo = new long[fila * fila]; 
   for (int i = 0; i < fila; i++)
   {
       for (int j = 0; j <= i; j++)
        {
            if (j != 0 && j != i)
            {    
                triangulo[i * fila + j] = triangulo[(i - 1) * (fila) + j] + triangulo[ (i - 1) * (fila) + j - 1];
            }
            else
            {
                *(triangulo + (i * fila + j)) = 1;
            }
        }
   }
   long * Ultima = new long[fila];
    for (int i = 0; i < fila; i++)
    {
        Ultima[i] = triangulo[(fila - 1) * fila + i];
    }
   delete (triangulo);
  return Ultima;
}
  
int main() 
{
    int Numfilas;
    cout<<"ingrese el número de fila:";
    cin>>Numfilas;
    long * fila = pascal(Numfilas);
    for (int j = 0; j < Numfilas; j++)
    {
        cout << *(fila + j) << " ";
    }
    delete (fila);
    cin.sync();
    cin.get();
    return 0;
}