#include <iostream>
using namespace std;
int sumaNaturales(int n){
    if(n==0){
        return 0;
    }else{
        return n+sumaNaturales(n-1);
    }
}
int main(){
    int num=5;
    int resultado=sumaNaturales(num);
    cout<<"La suma de los primeros "<<num<<" numeros naturales es: "<<resultado<<endl;
}