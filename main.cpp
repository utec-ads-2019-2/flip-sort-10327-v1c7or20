#include <iostream>
#include <vector>


using namespace std;

int main() {
   int Npuntos;
   while(cin>>Npuntos){
           int puntos[Npuntos];
       for (int i = 0; i < Npuntos; i++) {
           int valor;
           cin>>valor;
           puntos[i]=valor;
       }
       int contador = 0;
       for (int i = 0; i < Npuntos; i++) {
           for (int j = 0; j < Npuntos-1 ; j++) {
               if (puntos[j]>puntos[j+1]){
                   swap(puntos[j],puntos[j+1]);
                   contador++;
               }
           }
       }
       cout<<"Minimum exchange operations : "<<contador<<endl;
   }
}