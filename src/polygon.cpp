#include "Polygon.h"

/*---------------------------------------------------------------------------------------
 *                                   Constructor
 * --------------------------------------------------------------------------------------*/
Polygon::Polygon(float p1, float p2,float p3,float p4)
{
    this->p1 = p1;
    this->p2 = p2;
    this->p3 = p3;
    this->p4 = p4;
}

/*---------------------------------------------------------------------------------------
 *                                   Get phi_x of set
 * --------------------------------------------------------------------------------------*/
float Polygon::get_phi_x()
{
    return this->phi_x;
}


/*---------------------------------------------------------------------------------------
 *                         Calculate phi_x of a set based on a value
 * --------------------------------------------------------------------------------------*/
void Polygon::find_phi_x(float x)
{
    float y;
    if(x>=p1 && x<p2)
    {
        float m = 1/(p2-p1);
        y = m*(x-p1);
    }
    else if(x>=p2 && x<p3)
    {
        y = 1;
    }
    else if(x>=p3 && x<=p4)
    {
        float m = 1/(p3-p4);
        y = m*(x-p4);
    }
    else
    {
        y = 0;
    }
    this -> phi_x =  y;
}

