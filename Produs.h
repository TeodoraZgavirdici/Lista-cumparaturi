#include "pch.h"
#include <float.h>
#pragma once


using namespace System;





ref class Produs {
private:
    String^ nume;
  //  double pret;
public:
    Produs(String^ n, double p);
    String^ getNume();
    double pret;
    double getPret();
    static double calculeazaPretProdus(Produs^ p, double greutate);
};

