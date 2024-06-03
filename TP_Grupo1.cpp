#include <iostream>
using namespace std;
#define filas 3
#define columnas 2


struct producto {
    int id_producto;
    string nombre_producto;
    int fecha_vencimiento;
    int stock;
};

struct stock {
    int cant_palets;
    producto vecProd[10];
};

//Punto 2

struct pedido {
    int id_producto;
    int cantidad;
};

stock estanteria [filas][columnas];

int Consolidar[20];

int main() {
	
	producto producto1 = {7,"nombre1", 20241212, 5};
	producto producto2 = {4,"nombre2", 20241212, 3};
	
	stock carga1 = {6,producto2,producto1,producto1,producto1,producto1,producto1};
    estanteria [1][1]=carga1;
    
    cout << estanteria[1][1].vecProd[0].id_producto << endl;
    cout << estanteria[1][1].vecProd[1].id_producto << endl;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            for (int k = 0; k < estanteria[i][j].cant_palets; k++) {
                Consolidar[estanteria[i][j].vecProd[k].id_producto-1]+=estanteria[i][j].vecProd[k].stock;
            }
        }
    }
    

    for(int i=0; i<20;i++){
        cout << "El producto ID " << i+1 << " tiene un stock total de " << Consolidar[i] << endl;
    }

   return 0;

}