#include <iostream>
using namespace std;

int mcd(int a, int b){
    if(b==0){
        return a;
    }else{
        return mcd(b,a%b);
    }
}

int main(){
    int num1=12;
    int num2=18;
    int resultado=mcd(num1,num2);
    cout<<"El MCD de "<<num1<<" y "<<num2<<" es: "<<resultado<<endl;
    return 0;
}