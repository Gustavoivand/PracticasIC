#include <iostream>
using namespace std;
int suma (int a, int b){
    return a+b;
}

int main(){
    int num1=5;
    int num2=7;
    int resultado = suma(num1,num2);
    cout<<"La suma es:"<<resultado<<endl;
    return 0;
}