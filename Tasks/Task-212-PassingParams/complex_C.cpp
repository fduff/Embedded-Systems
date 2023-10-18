#include "stdio.h"
#include "math.h"
#include "complex_C.hpp"

ComplexNumber_C complexAdd(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C result ;
    result.real += b.real;
    result.imag += b.imag;
    return result;
}

ComplexNumber_C complexconjugate(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C result;
    result.real += b.real;
    result.imag += b.imag;
    
    return result;
}

ComplexNumber_C complexnegate(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C result;
    result.real = -result.real;
    result.imag = - result.imag;
    result.real +=  b.real;
    result.imag +=  b.imag;
    
    return result;
}

// ComplexNumber_C complexmessaround(const ComplexNumber_C a, const ComplexNumber_C b) {
//     ComplexNumber_C x = a;
   
//     result.real +=  b.real;
//     result.imag +=  b.imag;
    
//     return x;
// }
// double complexMag(const ComplexNumber_C a)
// {
 
//    double result;

//   result = sqrt(a.real*a.real + a.imag*a.imag);

//     return result;
// }

ComplexNumber_C complexSubtract(const ComplexNumber_C a, const ComplexNumber_C b, const ComplexNumber_C c) {
    ComplexNumber_C result ;
    result.real = -result.real;
    result.imag = -result.imag;
    result.real +=  b.real - c.real ;
    result.imag +=  b.imag - c.imag;
    
    return result;
}

void complexDisplaresult(const char *strName, const ComplexNumber_C u) {
    printf("%s = %f + j%f\n", strName, u.real, u.imag);
}

void complexDisplaresultconjugate(const char *strName, const ComplexNumber_C u) {
    printf("%s = %f - j%f\n", strName, u.real, u.imag);
}


