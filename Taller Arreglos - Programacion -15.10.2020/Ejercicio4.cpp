#include <iostream>
using namespace std;
int main ()
{
    float Arreglo1[24];
    int a;
    for (int i=0; i<=23; i++)
    {
        Arreglo1[i] = 23.5;
        Arreglo1[i] = 23;
        Arreglo1[i] = 22;
        Arreglo1[i] = 23.8;
        Arreglo1[i] = 24;
        Arreglo1[i] = 21;
        Arreglo1[i] = 18;
        Arreglo1[i] = 26;
        Arreglo1[i] = 16;
        Arreglo1[i] = 21.5;
        Arreglo1[i] = 23;
        Arreglo1[i] = 22;
        Arreglo1[i] = 19.8;
        Arreglo1[i] = 23;
        Arreglo1[i] = 24.3;
        Arreglo1[i] = 21.8;
        Arreglo1[i] = 25.2;
        Arreglo1[i] = 21.1;
        Arreglo1[i] = 20;
        Arreglo1[i] = 30;
        Arreglo1[i] = 23.3;
        Arreglo1[i] = 30.1;
        Arreglo1[i] = 19.9;
        Arreglo1[i] = 23.2;
    }
    cout<<"En que hora quiere conocer la temperatura, tenga en cuenta que es hora militar"<<endl;
    cin>>a;
    switch (a)
    {
        case 0:
            cout<<"La temperatura fue: "<<Arreglo1[0];
        break;
        case 1:
            cout<<"La temperatura fue: "<<Arreglo1[1];
        break;
        case 2:
            cout<<"La temperatura fue: "<<Arreglo1[2];
        break;
        case 3:
            cout<<"La temperatura fue: "<<Arreglo1[3];
        break;
        case 4:
            cout<<"La temperatura fue: "<<Arreglo1[4];
        break;
        case 5:
            cout<<"La temperatura fue: "<<Arreglo1[5];
        break;
        case 6:
            cout<<"La temperatura fue: "<<Arreglo1[6];
        break;
        case 7:
            cout<<"La temperatura fue: "<<Arreglo1[7];
        break;
        case 8:
            cout<<"La temperatura fue: "<<Arreglo1[8];
        break;
        case 9:
            cout<<"La temperatura fue: "<<Arreglo1[9];
        break;
        case 10:
            cout<<"La temperatura fue: "<<Arreglo1[10];
        break;
        case 11:
            cout<<"La temperatura fue: "<<Arreglo1[11];
        break;
        case 12:
            cout<<"La temperatura fue: "<<Arreglo1[12];
        break;
        case 13:
            cout<<"La temperatura fue: "<<Arreglo1[13];
        break;
        case 14:
            cout<<"La temperatura fue: "<<Arreglo1[14];
        break;
        case 15:
            cout<<"La temperatura fue: "<<Arreglo1[15];
        break;
        case 16:
            cout<<"La temperatura fue: "<<Arreglo1[16];
        break;
        case 17:
            cout<<"La temperatura fue: "<<Arreglo1[17];
        break;
        case 18:
            cout<<"La temperatura fue: "<<Arreglo1[18];
        break;
        case 19:
            cout<<"La temperatura fue: "<<Arreglo1[19];
        break;
        case 20:
            cout<<"La temperatura fue: "<<Arreglo1[20];
        break;  
        case 21:
            cout<<"La temperatura fue: "<<Arreglo1[21];
        break;
        case 22:
            cout<<"La temperatur fue: "<<Arreglo1[22];
        break;
        case 23:
            cout<<"La temperatura fue: "<<Arreglo1[23];
        break;
    }
    return 0;
}