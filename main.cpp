#include <iostream>
#include <string>
#include "Dictionary.h"
#include "Data.h"
using namespace std;
int main(){

    Dictionary* tienda = new Dictionary();

  //  tienda->add("Camisa", new Data("Zara", "340000"));
  //  tienda->add("Pantalon", new Data("Gucci", "50000"));
   // tienda->add("Zapatos", new Data("Prada", "27000"));
   bool condicion = true;
    while(condicion) {
        cout << "------------------------------------------------------" << endl;
        cout << "----Bienvenido al sitio de ventas de prendas----" << endl;
        cout << "----En este programa puedes vender camisas, pantalones o zapatos----" << endl;
        cout << "----Solo tendras que escoger que tipo de articulo/prenda quieres vender----" << endl;
        cout << "----Y luego deberas indicar de que marca y a que precio lo vendes----" << endl;
        cout << "----Ingrese una opcion (numero) para continuar ----" << endl;
        cout << "| [1] Agregar un articulo" << endl;
        cout << "| [2] Acceder a un articulo" << endl;
        cout << "| [3] Ver mis articulos" << endl;
        cout << "| [4] Salir " << endl;
        int opcion;
        cin >> opcion;
        switch (opcion) {
            case 4:
                condicion = false;
                break;
            case 1:
                cout << "| Has elegido: [1] Agregar un articulo |" << endl;
                cout << "| Que articulo quieres agregar? | " << endl;
                cout << "| [1] Camisa" << endl;
                cout << "| [2] Pantalon" << endl;
                cout << "| [3] Zapatos" << endl;
                int articulo;
                cin >> articulo;
                switch (articulo) {
                    case 1:{
                        Data* objeto1 = new Data("", "");
                        string marca;
                        string precio;
                        cout << "| Ingresa marca de la camisa: | " << endl;
                        cin >> marca;
                        cout << "| Ingresa precio de la camisa: | " << endl;
                        cin >> precio;
                        objeto1->setMarca(marca);
                        objeto1->setPrecio(precio);
                        tienda->add("Camisa", objeto1);}
                        break;
                    case 2:{
                        Data* objeto = new Data("", "");
                        string marca;
                        string precio;
                        cout << "| Ingresa marca del pantalon: | " << endl;
                        cin >> marca;
                        cout << "| Ingresa precio del pantalon: | " << endl;
                        cin >> precio;
                        objeto->setMarca(marca);
                        objeto->setPrecio(precio);
                        tienda->add("Pantalon", objeto);
                        break;}
                    case 3:{
                        Data* objeto = new Data("", "");
                        string marca;
                        string precio;
                        cout << "| Ingresa marca de los zapatos: | " << endl;
                        cin >> marca;
                        cout << "| Ingresa precio de la zapatos: | " << endl;
                        cin >> precio;
                        objeto->setMarca(marca);
                        objeto->setPrecio(precio);
                        tienda->add("Zapatos", objeto);}
                    default:
                        cout << "Opcion incorrecta" << endl;

                }
            break;

            case 2:
                cout << "| Has elegido: [2] Acceder a un articulo |" << endl;
                cout << "| A que articulo quieres acceder ? |" << endl;
                cout << "| [1] Camisa" << endl;
                cout << "| [2] Pantalon" << endl;
                cout << "| [3] Zapatos" << endl;
                int acceder;
                cin >> acceder;
                switch (acceder) {
                    case 1:
                        cout << "Acceso a Camisa: " <<  endl;
                        cout << tienda->get("Camisa");
                        break;
                    case 2:
                        cout << "Acceso a Pantalon: " <<  endl;
                        cout << tienda->get("Pantalon");
                        break;
                    case 3:
                        cout << "Acceso a Zapatos: " <<  endl;
                        cout << tienda->get("Zapatos");
                        break;
                    default:
                        cout << "Opcion incorrecta" << endl;

                }
            break;
            case 3:
                cout << "| Has elegido: [3] Ver mis articulos |" << endl;
                cout << "----Estos son tus articulos: ------" << endl;
                tienda->show();
                break;
            default:
                cout << "Opcion incorrecta" << endl;
            }
        }
    }

