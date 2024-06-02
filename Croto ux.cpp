#include <iostream>
using namespace std;
int main() {


/*	LO DEJO COMENTADO ACÁ YA PENSANDO EN EL LOOK & FEEL ME FALTA PENSAR CÓMO VOLVEMOS AL MENÚ PRINCIPAL
*/

int opcionOperacion;
cout << "Te damos la bienvenida al programa de la Empresa de Log\xA1stica." << endl;
cout << "" << endl;
cout << "Por favor, indic\xA0 cu\xA0l es la consulta:" << endl;
cout << "" << endl;
cout << "Ingres\xA0 1 para conocer la cantidad de cada producto almacenado." << endl;
cout << "" << endl;
cout << "Ingres\xA0 2 para realizar un pedido y conocer:" << endl;
cout << "- stock disponible por fecha de vencimiento," << endl;
cout << "- desde cu\xA0les estanter\xA1"<<"as deber\xA1"<<"a ser retirado y" << endl;
cout << "- el stock remanente en esas estanter\xA1"<<"as." << endl;
cout << "" << endl;
cout << "Ingres\xA0 3 para conocer en qu\x82 lugar de la estanter\xA1"<<"a podr\xA1"<<"a colocarse nuevo stock de productos." << endl;
cout << "" << endl;
cout << "Ingres\xA0 4 si quer\x82s saber c\xA2mo pensamos este programa." << endl;
cin >> opcionOperacion;
switch (opcionOperacion){
	
case 1:
	cout << "Seleccionaste la opci\xA2n 1: Conocer la cantidad de cada producto almacenado." << endl;
	cout << "El consolidado de stock es: " << endl;
	//colocamos el resultado del punto 1
break;
	
int opcionOperacion2ID_producto;
int opcionOperacion2cantidad;
case 2:
	cout << "Seleccionaste la opci\xA2n 2: Realizar un pedido." << endl; 
	cout << "Para realizar el pedido, necesitamos que nos indiques el ID del producto y la cantidad." << endl;
	cout << "Ingres\xA0 el c\xA2"<<"digo del producto." << endl;
	cin >> opcionOperacion2ID_producto;
	cout << "Ingres\xA0 la cantidad de producto a retirar." << endl;
	cin >> opcionOperacion2cantidad;
	
//acá buscamos 	el stock según los lineamientos del punto 2
//si no hay stock suficiente, avisamos
	
	cout << "Stock insuficiente." << endl;
	cout << "El stock disponible es: "<< endl;
	
break;

int opcionOperacion3NuevoStock;
int opcionOperacion3ID_producto;
case 3:
	cout << "Seleccionaste la opci\xA2n 3: D\xA2nde colocar un nuevo stock de producto." << endl;
	cout << "Si quer\x82s saber las posiciones libres y su capacidad, seleccion\xA0 1." << endl;
	cout << "Si quer\x82s saber las posiciones libres relacionadas con el producto que vas a ingresar, seleccion\xA0 2." << endl;
	
	cin >> opcionOperacion3NuevoStock;
	
	switch (opcionOperacion3NuevoStock){

	case 1:
		cout << "Las posiciones libres y su capacidad, son: " << endl;
		//acá ponemos el resultado del 3
	break;
	
	case 2:
		cout << "Ingres\xA0 el c\xA2"<<"digo del producto." << endl;
		cin >> opcionOperacion3ID_producto;
		//buscar las posiciones libres para el código de producto ingresado
		cout << "Las posiciones libres relacionadas con el producto que vas a ingresar, son: " << endl;
	break;
	}
break;

case 4:
	cout << "Seleccionaste la opci\xA2n 4: te contamos c\xA2mo pensamos este programa." << endl;
	
break;
	
}

return 0;
}