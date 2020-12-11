#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main ()
{
    int a, sumafactura=0, b, c, e, f=4,  bi, devuelta, cambioc, cambiov, cambiod, cambioci, cambiodos ,cambiomil, sobrante1, sobrante2, sobrante3, sobrante4, sobrante5;
    int arreglo[f];
    cout<<"Bienvenido al centro Comercial LozCrux"<<endl;
    cout<<"A continuacion habran una serie de opciones por favor seleccione la opcion que requiera"<<endl;
    cout<<"1. Quienes somos."<<endl;
    cout<<"2. Donde estoy, y como llegar"<<endl;
    cout<<"3. Calculadora de pagos"<<endl;
    cout<<"4. Pedir un taxi"<<endl;
    cout<<"5. Contactenos"<<endl;
    cin>>a;
    switch (a)
    {
    case (1):
        cout<<"El centro comercial LozCrux fue fundado el 19 de agosto de 2020 por el ingeniero Juan Alejandro Cruz y su socio Manuel F. Lozano."<<endl;
        cout<<"Este centro comercial cuenta con 4 pisos y 2 sotanos con una arquitectura innovadora, y 8 salidas de emergencia,"<<endl;
        cout<<"Ademas de contar con 4 puntos de encuentro en casos de algun problema"<<endl;
        cout<<"Cuenta con un mall de comidas y distintos almacenes en los que podras pasar mucho tiempo de calidad con ti familia"<<endl;
        break;

    case (2):
        cout<<"A continuacion podra seleccionar el sector al que desea conocer la ruta"<<endl;
        cout<<"1. Seccion de deportes"<<endl;
        cout<<"2. Seccion de belleza"<<endl;
        cout<<"3. Seccion de tecnologia"<<endl;
        cout<<"4. Seccion de ropa"<<endl;
        cout<<"5. Sotanos"<<endl;
        cout<<"Tenga en cuenta que se le dreccionara desde la entrada principal"<<endl;
        cout<<"Seleccione la opcion que desee"<<endl;
        cin>>e;
        switch (e)
        {
        case (1):
            cout<<"Para ir a la seccion de deportes siga esta ruta"<<endl;
            cout<<"*SE INSERTA MAPA*"<<endl;
            break;
        case (2):
            cout<<"Para ir a la seccion de belleza siga esta ruta"<<endl;
            cout<<"*SE INSERTA MAPA*"<<endl;           
            break;
        case (3):
            cout<<"Para ir a la seccion de tecnologia siga esta ruta"<<endl;
            cout<<"*SE INSERTA MAPA*"<<endl;           
            break;
        case (4):
            cout<<"Para ir a la seccion de ropa siga esta ruta"<<endl;
            cout<<"*SE INSERTA MAPA*"<<endl;           
            break;
        case (5):
            cout<<"Para ir al sotano siga esta ruta"<<endl;
            cout<<"*SE INSERTA MAPA*"<<endl;           
            break;
        }

        break;
  
    case (3):
        cout<<"A continuación encontrara una calculadora en la cual ingresara el tipo de producto que quiere comprar  y un breve catalogo "<<endl;
        cout<<"de algunos productos que podra encontrar en el centro comercial"<<endl;
        cout<<"ademas un sistema que arrojara cuanto sera su devuelta"<<endl;
        cout<<"Ingrese el tipo de almacen que quiere simular"<<endl;
        cout<<"1. Sección de deportes"<<endl;
        cout<<"2. Sección de belleza"<<endl;
        cout<<"3. Sección de tecnologia"<<endl;
        cout<<"4. Seccion de ropa"<<endl;
        cin>>b;
        switch (b)
        {
            case (1):
                cout<<"A continuacion el catalogo:"<<endl;
                cout<<"1. Zapatos para correr = 400000"<<endl;
                cout<<"2. Pantalonetas y legins = 89000"<<endl;
                cout<<"3. Camisetas = 120000"<<endl;
                cout<<"4. Gorras = 110000"<<endl;
                cout<<"5. Sacos = 240000"<<endl;
                cout<<"Seleccione las opciones que desee"<<endl;
                for (int i=1; i<=3; i++)
                {
                    cin>>c;
                    cout<<"desea continuar"<<endl;
                    cin>>i;
                    if (c==1)
                    {
                        sumafactura=sumafactura+400000;
                    }
                    else
                    {
                        if (c==2)
                        {
                            sumafactura=sumafactura+89000;
                        }
                        else
                        {
                            if (c==3)
                            {
                                sumafactura=sumafactura+120000;
                            }
                            else
                            {
                                if(c==4)
                                {
                                    sumafactura=sumafactura+110000;
                                }
                                else
                                {
                                    if (c==5)
                                    {
                                        sumafactura=sumafactura+240000;
                                    }
                                    else
                                    {
                                        cout<<"ingreso un numero erroneo";
                                    }   
                                }   
                            }   
                        }   
                    }   
                } 
                cout<<"su factura tiene el valor de"<<sumafactura<<endl;
                cout<<"ingrese el billete con el que va a pagar"<<endl;
                cin>>bi;
                if (bi>sumafactura and (bi % 50000 == 0 or bi % 20000 == 0 or bi % 10000 == 0 or bi % 5000 == 0 or bi % 2000 == 0 or bi % 1000 == 0))
                {
                    devuelta=bi-sumafactura;
                    cambioc=devuelta/50000;
                    sobrante1=devuelta%50000;
                    cout<<"se le devuelven "<<cambioc<<" 50000"<<endl;
                    if (devuelta % 50000 != 0)
                    {
                        cambiov=sobrante1/20000;
                        sobrante2=sobrante1%20000;
                        cout<<"se le devuelven "<<cambiov<<" 20000"<<endl;
                    }
                    if(sobrante1%20000 != 0)
                    {
                        cambiod=sobrante2/10000;
                        sobrante3=sobrante2%10000;
                        cout<<"se le devuelven "<<cambiod<<" 10000"<<endl;
                    }       
                    if (sobrante2%10000 != 0)
                    {
                        cambioci=sobrante3/5000;
                        sobrante4=sobrante3%5000;
                        cout<<"se le devuelven "<<cambioci<<" 5000"<<endl;
                    }
                    if (sobrante3%5000)
                    {
                        cambiodos=sobrante4/2000;
                        sobrante5=sobrante4%2000;
                        cout<<"se le devuelven "<<cambiodos<<" 2000"<<endl;
                    }
                    if (sobrante4%2000)
                    {
                        cambiomil=sobrante5/1000;
                        cout<<"se le devuelven "<<cambiomil<<" 1000"<<endl;
                    }
                }      
                else 
                {
                    cout<<"Esta ingresando un billete equivocado o su factura es mayor a su billete, revise porfavor"<<endl;
                } 
                break;
        
            case (2):
                cout<<"A continuacion el catalogo:"<<endl;
                cout<<"1. Locion Hombre = 400000"<<endl;
                cout<<"2. Maquina de afeitar electrica = 90000"<<endl;
                cout<<"3. Maquillaje = 150000"<<endl;
                cout<<"4. Depiladora electrica mujer= 80000"<<endl;
                cout<<"5. Locion mujer = 400000"<<endl;
                cout<<"Seleccione las opciones que desee"<<endl;
                for (int i=1; i<=3; i++)
                {
                    cin>>c;
                    cout<<"desea continuar"<<endl;
                    cin>>i;
                    if (c==1)
                    {
                        sumafactura=sumafactura+400000;
                    }
                    else
                    {
                        if (c==2)
                        {
                            sumafactura=sumafactura+90000;
                        }
                        else
                        {
                            if (c==3)
                            {
                                sumafactura=sumafactura+150000;
                            }
                            else
                            {
                                if(c==4)
                                {
                                    sumafactura=sumafactura+80000;
                                }
                                else
                                {
                                    if (c==5)
                                    {
                                        sumafactura=sumafactura+400000;
                                    }
                                    else
                                    {
                                        cout<<"ingreso un numero erroneo";
                                    }   
                                }   
                            }   
                        }   
                    }   
                } 
                cout<<"su factura tiene el valor de"<<sumafactura<<endl;
                cout<<"ingrese el billete con el que va a pagar"<<endl;
                cin>>bi;
                if (bi>sumafactura and (bi % 50000 == 0 or bi % 20000 == 0 or bi % 10000 == 0 or bi % 5000 == 0 or bi % 2000 == 0 or bi % 1000 == 0))
                {
                    devuelta=bi-sumafactura;
                    cambioc=devuelta/50000;
                    sobrante1=devuelta%50000;
                    cout<<"se le devuelven "<<cambioc<<" 50000"<<endl;
                    if (devuelta % 50000 != 0)
                    {
                        cambiov=sobrante1/20000;
                        sobrante2=sobrante1%20000;
                        cout<<"se le devuelven "<<cambiov<<" 20000"<<endl;
                    }
                    if(sobrante1%20000 != 0)
                    {
                        cambiod=sobrante2/10000;
                        sobrante3=sobrante2%10000;
                        cout<<"se le devuelven "<<cambiod<<" 10000"<<endl;
                    }       
                    if (sobrante2%10000 != 0)
                    {
                        cambioci=sobrante3/5000;
                        sobrante4=sobrante3%5000;
                        cout<<"se le devuelven "<<cambioci<<" 5000"<<endl;
                    }
                    if (sobrante3%5000)
                    {
                        cambiodos=sobrante4/2000;
                        sobrante5=sobrante4%2000;
                        cout<<"se le devuelven "<<cambiodos<<" 2000"<<endl;
                    }
                    if (sobrante4%2000)
                    {
                        cambiomil=sobrante5/1000;
                        cout<<"se le devuelven "<<cambiomil<<" 1000"<<endl;
                    }
                }      
                else 
                {
                    cout<<"Esta ingresando un billete equivocado o su factura es mayor a su billete, revise porfavor"<<endl;
                } 
                break;
        
            case (3):
                cout<<"A continuacion el catalogo:"<<endl;
                cout<<"1. Airpods Pro = 600000"<<endl;
                cout<<"2. Cargador iPhone = 150000"<<endl;
                cout<<"3. Auriculares iPhone = 120000"<<endl;
                cout<<"4. powerbank 10000 mAh = 100000"<<endl;
                cout<<"5. Cable carga rapida (Usb C) = 100000"<<endl;
                cout<<"Seleccione las opciones que desee"<<endl;
                for (int i=1; i<=3; i++)
                {
                    cin>>c;
                    cout<<"desea continuar"<<endl;
                    cin>>i;
                    if (c==1)
                    {
                        sumafactura=sumafactura+600000;
                    }
                    else
                    {
                        if (c==2)
                        {
                            sumafactura=sumafactura+150000;
                        }
                        else
                        {
                            if (c==3)
                            {
                                sumafactura=sumafactura+120000;
                            }
                            else
                            {
                                if(c==4)
                                {
                                    sumafactura=sumafactura+100000;
                                }
                                else
                                {
                                    if (c==5)
                                    {
                                        sumafactura=sumafactura+100000;
                                    }
                                    else
                                    {
                                        cout<<"ingreso un numero erroneo";
                                    }   
                                }   
                            }   
                        }   
                    }   
                } 
                cout<<"su factura tiene el valor de"<<sumafactura<<endl;
                cout<<"ingrese el billete con el que va a pagar"<<endl;
                cin>>bi;
                if (bi>sumafactura and (bi % 50000 == 0 or bi % 20000 == 0 or bi % 10000 == 0 or bi % 5000 == 0 or bi % 2000 == 0 or bi % 1000 == 0))
                {
                    devuelta=bi-sumafactura;
                    cambioc=devuelta/50000;
                    sobrante1=devuelta%50000;
                    cout<<"se le devuelven "<<cambioc<<" 50000"<<endl;
                    if (devuelta % 50000 != 0)
                    {
                        cambiov=sobrante1/20000;
                        sobrante2=sobrante1%20000;
                        cout<<"se le devuelven "<<cambiov<<" 20000"<<endl;
                    }
                    if(sobrante1%20000 != 0)
                    {
                        cambiod=sobrante2/10000;
                        sobrante3=sobrante2%10000;
                        cout<<"se le devuelven "<<cambiod<<" 10000"<<endl;
                    }       
                    if (sobrante2%10000 != 0)
                    {
                        cambioci=sobrante3/5000;
                        sobrante4=sobrante3%5000;
                        cout<<"se le devuelven "<<cambioci<<" 5000"<<endl;
                    }
                    if (sobrante3%5000)
                    {
                        cambiodos=sobrante4/2000;
                        sobrante5=sobrante4%2000;
                        cout<<"se le devuelven "<<cambiodos<<" 2000"<<endl;
                    }
                    if (sobrante4%2000)
                    {
                        cambiomil=sobrante5/1000;
                        cout<<"se le devuelven "<<cambiomil<<" 1000"<<endl;
                    }
                }      
                else 
                {
                    cout<<"Esta ingresando un billete equivocado o su factura es mayor a su billete, revise porfavor"<<endl;
                } 
                break;
        
            case (4):
                cout<<"A continuacion el catalogo:"<<endl;
                cout<<"1. Jeans = 130000"<<endl;
                cout<<"2. Shorts = 89000"<<endl;
                cout<<"3. Camisas = 120000"<<endl;
                cout<<"4. Sombreros = 70000"<<endl;
                cout<<"5. Accesorios = 30000"<<endl;
                cout<<"Seleccione las opciones que desee"<<endl;
                for (int i=1; i<=3; i++)
                {
                    cin>>c;
                    cout<<"desea continuar"<<endl;
                    cin>>i;
                    if (c==1)
                    {
                        sumafactura=sumafactura+130000;
                    }
                    else
                    {
                        if (c==2)
                        {
                            sumafactura=sumafactura+89000;
                        }
                        else
                        {
                            if (c==3)
                            {
                                sumafactura=sumafactura+120000;
                            }
                            else
                            {
                                if(c==4)
                                {
                                    sumafactura=sumafactura+70000;
                                }
                                else
                                {
                                    if (c==5)
                                    {
                                        sumafactura=sumafactura+30000;
                                    }
                                    else
                                    {
                                        cout<<"ingreso un numero erroneo";
                                    }   
                                }   
                            }   
                        }   
                    }   
                } 
                cout<<"su factura tiene el valor de"<<sumafactura<<endl;
                cout<<"ingrese el billete con el que va a pagar"<<endl;
                cin>>bi;
                if (bi>sumafactura and (bi % 50000 == 0 or bi % 20000 == 0 or bi % 10000 == 0 or bi % 5000 == 0 or bi % 2000 == 0 or bi % 1000 == 0))
                {
                    devuelta=bi-sumafactura;
                    cambioc=devuelta/50000;
                    sobrante1=devuelta%50000;
                    cout<<"se le devuelven "<<cambioc<<" 50000"<<endl;
                    if (devuelta % 50000 != 0)
                    {
                        cambiov=sobrante1/20000;
                        sobrante2=sobrante1%20000;
                        cout<<"se le devuelven "<<cambiov<<" 20000"<<endl;
                    }
                    if(sobrante1%20000 != 0)
                    {
                        cambiod=sobrante2/10000;
                        sobrante3=sobrante2%10000;
                        cout<<"se le devuelven "<<cambiod<<" 10000"<<endl;
                    }       
                    if (sobrante2%10000 != 0)
                    {
                        cambioci=sobrante3/5000;
                        sobrante4=sobrante3%5000;
                        cout<<"se le devuelven "<<cambioci<<" 5000"<<endl;
                    }
                    if (sobrante3%5000)
                    {
                        cambiodos=sobrante4/2000;
                        sobrante5=sobrante4%2000;
                        cout<<"se le devuelven "<<cambiodos<<" 2000"<<endl;
                    }
                    if (sobrante4%2000)
                    {
                        cambiomil=sobrante5/1000;
                        cout<<"se le devuelven "<<cambiomil<<" 1000"<<endl;
                    }
                }      
                else 
                {
                    cout<<"Esta ingresando un billete equivocado o su factura es mayor a su billete, revise porfavor"<<endl;
                } 
                break;
        }
        break;
    case (4):
        cout<<"Usted ha pedido un movil el cual lo recogera en la entrada principal del centro comercial"<<endl;
        cout<<"Su taxi demorara un promedio de 10 minutos"<<endl;
        srand(time(NULL));
        for(int i=0; i< f; i++)
        {
            arreglo[i] = 1 + rand() % (10 - 1);
        }
        cout<<"El numero de su taxi es: "<<endl;
        for (int i=0; i< f; i++)
        {
            cout<<arreglo[i]<<" ";;
        }
        break;

    case (5):
        cout<<"Correo:centrocomercial@lozcrux.com"<<endl;
        cout<<"Telefono:3067829472"<<endl;
        cout<<"Fijo:3457862"<<endl;
        break;
    }
}