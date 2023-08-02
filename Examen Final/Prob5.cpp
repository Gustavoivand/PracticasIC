#include <iostream>
#include <algorithm>
using namespace std;

string convertirAMAyusculas(string cadena){
    transform(cadena.begin(),cadena.end(),cadena.begin(),::toupper);
    return cadena;
    //minusculas ::tolower
}
int main(){
    string texto="HOLA MPHDp";
    string resultado =convertirAMAyusculas(texto);
    cout<<"El texto convertido a mayúsculas es: "<<resultado<<endl;
    return 0;
}