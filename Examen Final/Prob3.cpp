#include <iostream>
using namespace std;
int contarLetrasMinusculas (string cadena){
    int contador=0;
    for (char c: cadena){
        if(islower(c)){
            contador++;
        }
    }
    return contador;
}
int main(){
    string texto ="Hola Mundo";
    int resultado = contarLetrasMinusculas(texto);
    cout<< "El texto contiene "<<resultado<<" letras minúsculas."<<endl;
    return 0;
}
