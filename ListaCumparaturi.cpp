#include "pch.h"

#include "ListaCumparaturi.h"
#include <iostream>

using namespace std;

ListaCumparaturi::ListaCumparaturi() {
    listaProduse = gcnew List<Produs^>();
}

ListaCumparaturi::~ListaCumparaturi() {
    delete listaProduse;
}

void ListaCumparaturi::adaugaProdus(Produs^ p) {
    listaProduse->Add(p);
}

void ListaCumparaturi::eliminaProdus(int index) {
    listaProduse->RemoveAt(index);
}

void ListaCumparaturi::afiseazaLista() {
    for (int i = 0; i < listaProduse->Count; i++) {
        Console::WriteLine("{0} - {1}", listaProduse[i]->getNume(), listaProduse[i]->getPret());
    }

}
double calculeazaPretProdus(Produs^ p, double greutate) {
    return p->getPret() * greutate;
}