#include "iostream"
using namespace std;

int main()
{
    //problema 1.1
    // Construya un programa que dado el costo de un art�culo vendido y la cantidad
    //de dinero entregada por el cliente, calcule e imprima el cambio que debe entregar

    //Declaracion de variables
    float PRECIOPRODUCTO, DEVOLUCION;
    float PAGO;

    //Entrada de datos

    cout<<" Escribe el costo del art�culo "<<"\n";
    cin >> PRECIOPRODUCTO;

    cout<<"Escribe cuanto fue el pago del art�culo "<<"\n";
    cin>>PAGO;

    //CALCULO DE DEVOLUCION

    DEVOLUCION= PAGO-PRECIOPRODUCTO;

    //SE IMPRIME RESULTADOS
    cout<<" El cambio del cliente es "<<DEVOLUCION;
    return 0;
}
