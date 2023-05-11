#include "pch.h"
#include <iostream>
#include "Produs.h"
#include "ListaCumparaturi.h"

using namespace System;
double calculeazaPretProdus(Produs^ p, double greutate);

int main(array<System::String^>^ args) {
    ListaCumparaturi^ lista = gcnew ListaCumparaturi();

    Produs^ produs1 = gcnew Produs("mere", 2.5);
    Produs^ produs2 = gcnew Produs("pere", 3.0);
    Produs^ produs3 = gcnew Produs("banane", 1.8);

    lista->adaugaProdus(produs1);
    lista->adaugaProdus(produs2);
    lista->adaugaProdus(produs3);

    lista->afiseazaLista();

    lista->eliminaProdus(1);
    Console::WriteLine("Iata lista dupa eliminare:");
    lista->afiseazaLista(); 
    
    
    
   double greutate;
    Console::WriteLine("Introduceti greutatea pentru mere:");
    std::cin >> greutate;
    Console::WriteLine("Pretul pentru mere este: {0}", calculeazaPretProdus(produs1, greutate));

    Console::WriteLine("Introduceti greutatea pentru pere:");
    std::cin >> greutate;
    Console::WriteLine("Pretul pentru pere este: {0}", calculeazaPretProdus(produs2, greutate));

    Console::WriteLine("Introduceti greutatea pentru banane:");
    std::cin >> greutate;
    Console::WriteLine("Pretul pentru banane este: {0}", calculeazaPretProdus(produs3, greutate));

   /* lista->eliminaProdus(1);
    Console::WriteLine("Iata lista dupa eliminare:");
    lista->afiseazaLista(); */
    
}