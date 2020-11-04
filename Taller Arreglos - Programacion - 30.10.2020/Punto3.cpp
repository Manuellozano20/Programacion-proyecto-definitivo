#include <iostream>
#include <math.h>
#include <stdlib.h>   
#include <time.h>       

using namespace std;

int main()
{
    int nf=4,nc=5, res=0, primn=0, segnum=1 ;
    int matrizA[nf][nc];
    cout<<endl<<endl<<"matriz A ="<<endl;
    for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
            res=primn+segnum;
            matrizA[i][j]=res;
            primn=segnum;
            segnum=res;
        }
    }
    for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
            cout<<matrizA[i][j]<<" ";
        }cout<<endl;
    }
}
   