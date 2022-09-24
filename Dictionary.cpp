#include <iostream>
#include <string>
#include "Dictionary.h"
#include "Data.h"
using namespace std;

Dictionary::Dictionary(){
    this->key = "";
    this->data = NULL;
}
Dictionary::Dictionary(string key, Data* data){
    Data* actual = data;
    Dictionary* elSiguiente = NULL;
    this->data = actual;
    this->key = key;
    this->next = elSiguiente;
}
void Dictionary::add(string key, Data* data) {

    Dictionary *nuevoNodo = new Dictionary(key, data);
   // for (int i = 0; i < 7; i++) {
       // if (tipos[i] == key) {
            if (key == "Camisa" || key == "Pantalon" || key == "Zapatos" || key == "camisa" || key == "pantalon" ||
                key == "zapatos") {
                if (this->head) {
                    Dictionary *actual = this->head;
                    while (actual->next) {
                        actual = actual->next;
                    }
                    actual->next = nuevoNodo;
                    nuevoNodo->next = NULL;
                } else {
                    this->head = nuevoNodo;
                    nuevoNodo->next = NULL;
                }
            } else {
                cout << "Usted ha ingresado una llave incorrecta.";
            }
        }
/*
    for (int i = 0; i < 7; i++) {
        if (tipos[i] == this->key) {
            if (tipos[i] == "Camisa" || tipos[i] == "camisa") {
                for (int j = 0; j < sizeof(camisas); j++) {
                    if (camisas[j] == NULL) {
                        camisas[j] = data;
                        break;
                    }
                }
            } else if (tipos[i] == "Falda" || tipos[i] == "falda") {
                for (int j = 0; j < sizeof(faldas); j++) {
                    if (faldas[j] == NULL) {
                        faldas[j] = data;
                        break;
                    }
                }
            } else if (tipos[i] == "Vestido" || tipos[i] == "vestido") {
                for (int j = 0; j < sizeof(vestidos); j++) {
                    if (vestidos[j] == NULL) {
                        vestidos[j] = data;
                        break;

                    }
                }
            }
        }
    }
}*/
string Dictionary::get(string key) {
    Dictionary *temp = this->head;
    while(temp){
        if(temp->key == key){
            return temp->data->verDatos();

        }
        temp = temp->next;
    }
}
void Dictionary::show() {
    Dictionary *temp = this->head;
    while (temp) {
        temp->show2();
        temp = temp->next;
    }
}
void Dictionary::show2(){
    cout << "["<< this->key <<"]->"
         << "[ " << this->data->verDatos() << " ]" << endl;
    cout << "'" << endl;
    cout << "v" << endl;
}





    // intento de retornar tipo Data* :
    // Data* get(string key, Data* camisas, Data* pantalones, Data* zapatos) {
    //srand(time(0));  // random num
    //int num = (rand() % 10) + 1;
    //if (key == "Camisa" || key == "camisa") {
       // for (int j = 0; j < sizeof(camisas); j++) {
           // if (camisas[j] ) {



