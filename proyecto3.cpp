#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <cstdlib>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <random>
#include <chrono>


using namespace std;

void coladespera(){
int op;
cout << "Selecciona una de las siguiente opciones\n ";
cout << "Ordenado  (1) \n";
cout << "Ordenado inverso  (2) \n";
cout << "Revuelto duplicado (3) \n";
cout << "Revuelto sin duplicado  (4)\n";
cout << "Salir (5)  \n";

cout << "ingrese una de las opciones\n";
cin >> op;

do{
switch (op)
{
case 1:

    break;

case 2:

    break;

case 3:

    break;

case 4:

    break;

case 5:

    break;

default:
    break;
}

}while(op!=5);


}
void Trazabilidadobjetos(){
int ope;
cout << "Selecciona una de las siguiente opciones\n ";
cout << "Ordenado  (1) \n";
cout << "Ordenado inverso  (2) \n";
cout << "Revuelto duplicado (3) \n";
cout << "Revuelto sin duplicado  (4)\n";
cout << "Salir (5)  \n";

cout << "ingrese una de las opciones\n";
cin >> ope;


do{
switch (ope)
{
case 1:

    break;

case 2:

    break;

case 3:

    break;

case 4:

    break;

case 5:

    break;

default:
    break;
}

}while(ope!=5);
}

void eventoescenarios(){
int open;
cout << "Selecciona una de las siguiente opciones\n ";
cout << "Ordenado  (1) \n";
cout << "Ordenado inverso  (2) \n";
cout << "Revuelto duplicado (3) \n";
cout << "Revuelto sin duplicado  (4)\n";
cout << "Salir (5)  \n";

cout << "ingrese una de las opciones\n";
cin >> open;

do{
switch (open)
{
case 1:

    break;

case 2:

    break;

case 3:

    break;

case 4:

    break;

case 5:

    break;

default:
    break;
}

}while(open!=5);
}


int main(){
int num;
/*menu para activar las tres carreras del programa*/
cout << "bienvenido al programa--------\n ";
cout << "Colas de espera------(1)------\n";
cout << "Trazabilidad de objetos (2)---\n";
cout << "Eventos de cada escenario (3)--\n";
cout << "Salir del programa (4)--------\n";

cout << "ingrese una de las opciones\n";
cin >> num;

/*switch que ejecutara las carreras o saldra del programa segun lo requerido*/
do{
switch (num)
{
case  1:
    
    break;
case 2:

    break;

case 3:

    break;

case 4:
    break;
default:
    break;
}

}while(num != 4);





return 0;
}
