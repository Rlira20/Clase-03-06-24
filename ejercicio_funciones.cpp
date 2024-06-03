#include <iostream>
using namespace std;



int resta(int numero1, int numero2){
    int resultado=0;
    resultado = (numero1 - numero2);
    return resultado;
}
int main(){
    int n1=0, n2=0, res;
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    resta(n1, n2);
    res = resta(n1, n2);

    cout << "El valor de la suma es: " << res;
    return 0;
}