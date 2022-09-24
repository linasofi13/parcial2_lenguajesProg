#include <iostream>
#include <string>
#include "Data.h"
using namespace std;

Data::Data() {
    this->marca = "No hay marca";
    this->precio = "No hay precio";
}
Data::Data(string marca, string precio) {
    this->marca = marca;
    this->precio = precio;
}
void Data::setMarca(string marca){
    this->marca = marca;
}
void Data::setPrecio(string precio){
    this->precio = precio;
}
string Data::verDatos(){
    string texto = " | Marca: ";
    texto = texto + this->marca;
    texto  = texto + " | Precio: ( $" + this->precio + " ) |";
    return texto;
};
