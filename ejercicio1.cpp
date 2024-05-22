#include <iostream>

using namespace std;

int main(){
float nota[6], promedio=0;

cout<<"Bienvenido a la calculadora para saber tu nota promedio\n";

for(int i=0; i < 6; i++){
  cout<<"Ingrese sus notas porfavor\n";
 do{ cin>>nota[i];
 if(nota[i]<0||nota[i]>10){
    cout<<"El valor agregado no es valido, ingreselo nuevamente\n";
 }
 }while(nota[i]<0||nota[i]>10);
  promedio = promedio + nota[i];
}
promedio = promedio/6;

cout<<"Su promedio de notas es: "<<promedio<<"\n";
    return 0;
}