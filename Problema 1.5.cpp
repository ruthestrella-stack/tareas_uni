#include "iostream"
using namespace std;

int main()
{
    // Problema 1.5: Calcular el área y volumen de un cilindro
    float RADIO, ALTURA, VOLUMEN, AREA;
    const float PI = 3.141592;

    // Entrada de datos
    cout << "Escribe la medida del radio: " << "\n";
    cin >> RADIO;

    cout << "Escribe la medida de la altura: " << "\n";
    cin >> ALTURA;

    // CÁLCULO
    VOLUMEN = PI * (RADIO * RADIO) * ALTURA;  // 
    AREA = 2 * PI * RADIO * (RADIO + ALTURA);  // 

    // SE IMPRIME RESULTADOS
    cout << "El volumen del cilindro es: " << VOLUMEN << "\n";
    cout << "El area del cilindro es: " << AREA << "\n";
    
    return 0;
}
