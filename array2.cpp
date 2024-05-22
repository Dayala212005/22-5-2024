#include <iostream>

using namespace std;

int main(){

string nombres[5];
for(int i = 0; i < 5; i++){
    cout<<"Introduczca un nombres\n";
    cin>>nombres[i];
}
cout<<"Los nombres ingresados son: \n";
for(int i = 0; i<5; i++){
    
    cout<<nombres[i]<<"\n";
}
    return 0;
}
