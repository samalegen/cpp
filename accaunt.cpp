#include <iostream>
#include "accaunt.h"

using namespace std;

Accaunt::Accaunt(int balans)
{
    setBalans( balans );
}

void Accaunt::setBalans(int balans)
{
    bal = balans;
}

void Accaunt::credit( int credit )
{
    bal += credit;
}

void Accaunt::debit( int debit )
{
    bal -= debit;
}

int Accaunt::getBalans()
{
    return bal;
}
