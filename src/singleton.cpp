#include "singleton.h"

/*---------------------------------------------------------------------------------------
 *                                Constructor
 * --------------------------------------------------------------------------------------*/
Singleton::Singleton(float p1)
{
    this -> p1 = p1;
}

/*---------------------------------------------------------------------------------------
 *                             Get and set phi_x of set
 * --------------------------------------------------------------------------------------*/
void Singleton::find_phi_x(float x)
{
    this->phi_x=x;
}

float Singleton::get_phi_x()
{
    return this->phi_x;
}


