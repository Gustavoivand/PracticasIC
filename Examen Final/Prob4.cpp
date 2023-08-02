#include <iostream>
using namespace std;

int contarDigitos(int numero){
    if (numero==0){
        return 0;
    }else{
        return 1+contarDigitos(numero/10);
    }
}

int main(){
    int num=1234567890;
    int resultado=contarDigitos(num);
    cout<<"El número "<< num <<" tiene "<<resultado<< " digitos"<<endl;

}