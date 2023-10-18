#include "mbed.h"
#include "complex_C.hpp"





// TASK - write and test complexConjugate, complexNegate, complexSubtract, complexMagnitude, complexMultiply and complexDivide

int main() {
    printf("\n\nTASK312\n");

    //Create instance of a complex number
    ComplexNumber_C p = {2.0, 3.0};
    ComplexNumber_C q = {1.0, 1.0};
    ComplexNumber_C d = {5.0, 6.0};
    ComplexNumber_C y = {0.0,0.0};


    ComplexNumber_C* ptrP;
    ComplexNumber_C* ptrq;
    ComplexNumber_C* ptrd;
    ComplexNumber_C* ptry;

    ptrP = &p; 
    ptrq = &q; 
    ptrd = &d;
    ptry = &y;

    ptry->imag = p.imag + q.imag;

    complexDisplay("p", p);
    complexDisplay("q", q);
    complexDisplay("d", d);


    ptry->imag = p.imag + q.imag;    
    ptry->real = p.real + q.real; 
    complexDisplay("add", y);

    ptry->imag = p.imag - q.imag;    
    ptry->real = p.real - q.real; 
    complexDisplay("subtracct", y);

   // ptry->imag = (p.imag/q.imag);    
   // ptry->real = (p.real/q.real); 
   // complexDisplay("devision", y);
   

 
    ComplexNumber_C sum = complexAdd(p, q);
    ComplexNumber_C conjugate = complexconjugate(p, q);
    ComplexNumber_C minus = complexnegate(p, q);
    ComplexNumber_C sub = complexSubtract(p, q, d);
    //ComplexNumber_C mag = complexMag(p);

    //display
    complexDisplay("p+q", sum);
    complexDisplayconjugate("CONJ(P+Q)", conjugate);
    complexDisplay("p-q", minus);
    complexDisplay("p - q - d", sub);
    //complexDisplay("P MAGNITUDE", mag);

    
    
    while (true) {
    }
}
