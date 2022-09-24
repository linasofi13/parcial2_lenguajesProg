#pragma once
#include <iostream>
#include <string>
using namespace std;
class Data {
protected:
    string marca;
    string precio;
public:
    Data();
    Data(string marca, string precio);
    void setMarca(string marca);
    void setPrecio(string precio);
    string verDatos();
};
