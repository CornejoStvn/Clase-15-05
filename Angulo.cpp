#include <iostream>
using namespace std;

int main (){
float angulo;

cout<<"Ingrese un angulo: ";
cin>>angulo;

if(angulo> 1 && angulo<90){
cout<<"su angulo es agudo ";
}
else if(angulo>90 && angulo <=360){
    cout <<"su anglo es obtuso ";
}
else if (angulo==90){
    cout << "su angulo es recto ";
}
else{
    cout<<"el angulo no es valido ";
}
return 0;
}