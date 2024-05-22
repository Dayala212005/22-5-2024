#include <iostream> //programa que suma numeros de 1 al 100

using namespace std;

int main(){
int numero[100],suma=0;
for(int i = 0; i<100; i++){
    numero[i]={i+1};
    suma = suma + numero[i];
}
cout<<suma;
    return 0;
}