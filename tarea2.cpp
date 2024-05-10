#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

//renato_quispe_vargas

int main() {
    ifstream archivo("C:/Users/renat/Desktop/datos.txt"); 
    if (!archivo.is_open()) {
        cerr << "No se pudo abrir el archivo." << endl;
        return 1;
    }

    vector<double> numeros;
    double numero;
    while (archivo >> numero) {
        numeros.push_back(numero);
    }
    archivo.close();

    int conteo = numeros.size(); 
    if (conteo == 0) {
        cout << "archivo no valido" << endl;
        return 1;
    }

    double suma = 0.0;
    for (double valor : numeros) {
        suma += valor;
    }
    double media = suma / conteo;

    double suma_varianza = 0.0;
    for (double valor : numeros) {
        suma_varianza += pow(valor - media, 2);
    }
    double varianza = suma_varianza / conteo;

    double desviacion_estandar = sqrt(varianza);

    cout << "*****Tarea 2****** " << endl;
    cout << "Cantidad de datos encontrados: " << conteo << endl;
    cout << "Media: " << media << endl;
    cout << "Varianza: " << varianza << endl;
    cout << "Desviacion Estandar: " << desviacion_estandar << endl;

    return 0;
}