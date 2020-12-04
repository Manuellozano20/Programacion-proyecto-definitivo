#include <iostream>
#include<stdlib.h>
#include<time.h>


using namespace std;
int main() 
{
int i=0, num;
int arreglo[50];
srand(time(NULL));
num=rand()%11;
for ( i = 0; i < 49; i++)
{
 arreglo[i]=i*num;
 cout<<arreglo[i]<<" ";
}
return 0;
}

