#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
int ArregloA[15], i=0;
srand(time(NULL));
for (i=0; i<10; i++)
{
 ArregloA[i]=rand()%50;
}
for ( i = 0; i < 10; i++)
{
 cout<<ArregloA[i]<<" ";
}


return 0;
}

