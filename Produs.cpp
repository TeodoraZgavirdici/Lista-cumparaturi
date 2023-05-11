#include "pch.h"
#include "ListaCumparaturi.h"
#include "Produs.h"

Produs::Produs(String^ n, double p) {
	nume = n;
	pret = p;
}

String^ Produs::getNume() {
	return nume;
}

double Produs::getPret() {
	return pret;
}

double Produs::calculeazaPretProdus(Produs^ p, double greutate) { // definire ca functie prietena statica
	return p->pret * greutate;
}





