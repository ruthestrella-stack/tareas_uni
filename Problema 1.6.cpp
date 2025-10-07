#include "iostream"
using namespace std;

int main()
{
    // Problema 1.6: Calcular el número de segundos en un determinado número de días
    int DIAS;
    long SEGUNDOS;  

    // Entrada de datos
    cout << "Escribe el número de días para calcular los segundos: " << "\n";
    cin >> DIAS;

    // CALCULO
    SEGUNDOS = DIAS * 24 * 60 * 60;

    // SE IMPRIME RESULTADOS
    cout << "En " << DIAS << " días, hay " << SEGUNDOS << " segundos" << "\n";

    return 0;
}
