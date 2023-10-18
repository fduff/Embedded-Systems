#ifndef __complex_C__
#define __complex_C__




typedef struct {
  double real;
  double imag;
} ComplexNumber_C;


extern void complexDisplay(const char *strName, const ComplexNumber_C u);
extern void complexDisplayconjugate(const char *strName, const ComplexNumber_C u);
extern ComplexNumber_C complexAdd(const ComplexNumber_C a, const ComplexNumber_C b);
extern ComplexNumber_C complexconjugate(const ComplexNumber_C a, const ComplexNumber_C b);
extern ComplexNumber_C complexnegate(const ComplexNumber_C a, const ComplexNumber_C b);
extern ComplexNumber_C complexSubtract(const ComplexNumber_C a, const ComplexNumber_C b, const ComplexNumber_C c);
extern double complexMag(const ComplexNumber_C a);


#endif
