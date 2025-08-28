#include <iostream>
using namespace std;
int main(){
double precio_producto, valor_a_pagar;
int cantidad_de_productos;
string tipo_de_cliente;
cout << "ingrese el precio del producto: " <<endl;
cin >> precio_producto;

cout << "ingrese la cantidad de productos: " <<endl;
cin >> cantidad_de_productos;

cout << "seleccione tipo de cliente: VIP / regular: ";
cin >> tipo_de_cliente;
if(tipo_de_cliente == "VIP"){
valor_a_pagar = (precio_producto * 0.8) * cantidad_de_productos;
cout << "el valor a pagar es: " <<endl <<valor_a_pagar;
}
if(tipo_de_cliente == "regular" && cantidad_de_productos >= 4){
valor_a_pagar = (precio_producto * 0.90) * cantidad_de_productos;
cout << "el valor a pagar es: " <<endl <<valor_a_pagar;
}
if(tipo_de_cliente == "regular" && cantidad_de_productos < 4){
valor_a_pagar = precio_producto * cantidad_de_productos;
cout << "el valor a pagar es: " <<endl <<valor_a_pagar;

}

return 0;
}
