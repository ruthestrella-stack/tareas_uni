#include "iostream"
using namespace std;

int main()
{
    // Problema 1.6: Calcular el n�mero de segundos en un determinado n�mero de d�as
    int DIAS;
    long SEGUNDOS;  

    // Entrada de datos
    cout << "Escribe el n�mero de d�as para calcular los segundos: " << "\n";
    cin >> DIAS;

    // CALCULO
    SEGUNDOS = DIAS * 24 * 60 * 60;

    // SE IMPRIME RESULTADOS
    cout << "En " << DIAS << " d�as, hay " << SEGUNDOS << " segundos" << "\n";

    return 0;
}
