#include "pch.h"
#pragma once
#include "Produs.h"

using namespace System;
using namespace System::Collections::Generic;

ref class ListaCumparaturi {
private:
    List<Produs^>^ listaProduse;
    
public:
    ListaCumparaturi();
    ~ListaCumparaturi();
    void adaugaProdus(Produs^ p);
    void eliminaProdus(int index);
    void afiseazaLista();
    

};
