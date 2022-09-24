#pragma once
#include <iostream>
#include <string>
#include "Data.h"
using namespace std;

class Dictionary{

protected:
    Data* data;
    string key;

public:
    Dictionary* head;
    Dictionary* next;
    Dictionary();
    Dictionary(string key, Data* data);
    void add(string key, Data* data);
    string get(string key);
    void show();
    // void verDiccionario();
    void show2();
};
