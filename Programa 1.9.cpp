#include "iostream"
#include <stdio.h>
using namespace std;

int main()
{
    int NUM, CUA, CUB;
    
    // Mensaje de bienvenida
    cout << "Hola! Este programa 1.9 Calcular el cuadrado y el cubo de un numero entero positivo" << "\n";
    
    // Se pide el valor de NUM
    cout << "Por favor ingrese el valor de NUMERO: " << "\n";
    cin >> NUM;
    
    // Resolvemos la f�rmula del problema 
    CUA = NUM * NUM;  // Cuadrado: n�mero multiplicado por s� mismo
    CUB = NUM * CUA;  // Cubo: n�mero por el cuadrado
    
    // Enviamos el resultado de CUA Y CUB a la pantalla
    cout << "El cuadrado de " << NUM << " es: " << CUA << " y el cubo es: " << CUB << endl;
    
    return 0;
}
