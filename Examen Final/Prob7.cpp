#include <iostream>
#include <string.h>
using namespace std;
bool sonCadenasIguales(string cadena1,string cadena2){
    if (cadena1.compare(cadena2)==0){
        return true;
    }else{
        return false;
    }
}
int main(){
    string texto1="tupapa";
    string texto2="tupapa";
    bool resultado=sonCadenasIguales(texto1,texto2);
    if(resultado){
        cout<<"Las cadenas son iguales"<<endl;
    }else{
        cout<<"Las cadenas son diferentes"<<endl;
    }
    return 0;
}