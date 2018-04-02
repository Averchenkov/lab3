#include "function.h"
#include <cmath>

float otrezok(Tochka t1,Tochka t2)
{
    return sqrt(pow((t1.first-t2.first),2)+pow((t1.second-t2.second),2));
}

void raspologenie(Tochka t,Circle &k,int *in,int *out,int *touch)
{
    if(otrezok(t,k.get_centr())>k.get_radius()) *out=*out+1;
    else if(otrezok(t,k.get_centr())==k.get_radius()) *touch=*touch+1;
    else if(otrezok(t,k.get_centr())<k.get_radius()) *in=*in+1;   
}
