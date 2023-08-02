#include <iostream>
#include <sstream>
using namespace std;

int contarPalabras(string cadena){
    stringstream ss(cadena);
    string palabra;
    int contador = 0;
    while (ss >> palabra){
        contador++;
    }
    return contador;
}

int main(){
    string texto ="Triqueando se pasan los años rápido";
    int resultado =contarPalabras(texto);
    cout<<"El texto tiene "<< resultado<<" palabras."<<endl;
    return 0;
}