#include <iostream>
using namespace std;

int main(){
int a1=0, a2=0, r=0;

cout<<"ingrese un angulo: "; 
cin>>a1;

cout<<"ingrese el segundo angulo: ";
cin>>a2;

if(a1+a2<180){
r=180-(a1+a2);
cout<<"El tercer angulo es: "<<r;

}
else if (a1+a2>=180){
    cout<<"Los angulos no son validos, ingrese otros";
}
return 0;
}