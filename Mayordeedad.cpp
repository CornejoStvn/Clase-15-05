#include <iostream>
using namespace std;

int main(){
int a=0;

cout<<"Ingrese su edad: ";
cin>>a;
if(a<18){
cout<<"usted es menor de edad";
}
else if(a>18){
    cout<<"usted es mayor de edad";
}
return 0;
}