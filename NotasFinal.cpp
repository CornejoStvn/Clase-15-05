#include <iostream>
using namespace std;

int main(){
float c1=0, c2=0, p1=0, p2=0, Lab=0, pyt=0, r=0;
string nombre;

cout<< "Ingrese la nota del primer corto:",
cin >>c1;

cout<< "ingrese la nota del segundo corto: ";
cin>>c2;

cout<< "ingrese la nota del primer parcial: ";
cin>>p1;

cout<< "Ingrese la nota del segundo parcial: ";
cin>>p2;

cout <<"ingrese nota del proyecto: ";
cin>>pyt;

r=(c1*0.10)+(c2*0.10)+(p1*0.15)+(p2*0.20)+(pyt*0.25);

if(r>=6 && r<=10){
    cout<<"Felicidades"<< nombre <<"pasa la materia con:" <<r;
}
else if (r>=1 && r<6){
    cout<<"lo sentimos "<<nombre<<" reprobo el ciclo con"<<r<<".Ni modo";
}
return 0;
}