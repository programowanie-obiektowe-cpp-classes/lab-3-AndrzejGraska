#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    unsigned int ilosc_towaru;
    unsigned int zaglowce;
    zaglowce=0;
    ilosc_towaru=0;

    Stocznia stocznia{};
    Statek*  s1;

    while (ilosc_towaru < towar) {
        s1 = stocznia();
        if (dynamic_cast< Zaglowiec* >(s1) != nullptr) {
            zaglowce++;
        }

        ilosc_towaru=ilosc_towaru+s1->transportuj();
        // s1->transportuj();

        delete s1;
    }

    return zaglowce;
}