#include "iostream"
#include <stdio.h>
using namespace std;

int main()
{
    float Altura, Base;
    float SUPERFICIE, PERIMETRO;
    
    // Mensaje de bienvenida
    cout << "Hola! Este programa 1.10 Calcula la superficie y el perimetro de un rectangulo" << "\n";

    // Se pide la base
    cout << "Por favor ingrese el valor de la Base: " << "\n";
    cin >> Base;
    
    // Se pide la altura
    cout << "Por favor ingrese el valor de la Altura: " << "\n";
    cin >> Altura;

    // Cálculos
    SUPERFICIE = Base * Altura;
    PERIMETRO = 2 * (Base + Altura);

    // Se muestra el resultado.
    printf("\n La Superficie del rectangulo es %5.2f \n", SUPERFICIE);
    printf("\n El perimetro del rectangulo es %5.2f \n", PERIMETRO);
    
    return 0;
}
