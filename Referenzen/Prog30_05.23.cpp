#include "Prog30_05_23.h"

cComplex::cComplex(const double& re_in const double& im_in):re(re_in), in(im_in){}

    
cComplex::ostream& operator << (ostream& out, const cComplex& c){
    out<< "re = "<< c.re<<" ,im = "<<c.im <<" ";
    return out;
}