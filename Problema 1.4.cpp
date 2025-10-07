#include "iostream"
using namespace std;

int main()
{
    // Problema 1.4: Calcular el costo de gasolina
    // Los surtidores registran en galones, pero el precio es por litro
    // 1 galón = 3.785 litros, precio del litro = 8.20

    // Declaracion de variables
    float GALONES, TOTAL;
    const float LITROS_POR_GALON = 3.785;
    const float PRECIO_POR_LITRO = 8.20;

    // Entrada de datos
    cout << "Escribe la cantidad de galones comprados: " << "\n";
    cin >> GALONES;

    // CALCULO CORREGIDO
    TOTAL = GALONES * LITROS_POR_GALON * PRECIO_POR_LITRO;

    // SE IMPRIME RESULTADOS
    cout << "Hay que cobrar al cliente por " << GALONES << " galones " << "debe pagar " << TOTAL << " pesos" << "\n";
    
    return 0;
}
