#include <iostream>
using namespace std;
int factorial(int n){
    if (n==0 || n==1){
        return 1;
    } else {
        return n*factorial(n-1);
    }
}
int main(){
    int numero=5;
    int resultado=factorial(numero);
    cout<<"El factorial de "<<numero<<" es: "<<resultado<<endl;
    return 0;
}