#include "iostream"
#include "cmath"
using namespace std;

int main()
{
    // Problema 1.7: Calcular el �rea de un tri�ngulo usando la f�rmula de Her�n
    // l1, l2, l3 representan los tres lados del tri�ngulo
    
    float L1, L2, L3, S, AREA;

    // Entrada de datos
    cout << "Escribe la medida del lado uno del triangulo: " << "\n";
    cin >> L1;

    cout << "Escribe la medida del lado dos del triangulo: " << "\n";
    cin >> L2;

    cout << "Escribe la medida del lado tres del triangulo: " << "\n";  // 
    cin >> L3;

    // C�LCULO - F�rmula de Her�n
    S = (L1 + L2 + L3) / 2;  // Corregido: era $ en lugar de S
    AREA = sqrt(S * (S - L1) * (S - L2) * (S - L3));

    // SE IMPRIME RESULTADOS
    cout << "El area del triangulo es: " << AREA << "\n";

    return 0;
}  // 
