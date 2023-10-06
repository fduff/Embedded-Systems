#include "mbed.h"

// Date Type ComplexNumber_C
typedef struct {
  double real;
  double imag;
} ComplexNumber_C;



// Date Type ComplexNumber_Y
typedef struct {
  double real;
  double imag;
} ComplexNumber_Y;


int main() {

    //Create instance of a complex number
    //ComplexNumber_C p;
   // ComplexNumber_C q;

    //Initialise each attribute 
    //p.real = 2.0;
    //p.imag = 3.0;
    // create a q varibel
    //q.real = 1.0;
    //q.imag = 3.0;

    //Create and Initialise 
    ComplexNumber_C p = {.real = 1.0,.imag = 3.0};
    ComplexNumber_C q = {.real = 1.0,.imag = 3.0};
    ComplexNumber_Y Y;
 
  
    // TASK:
    // Create another complex number y
    // Calculate the complex sum of p and q and store in y
    // Use printf to display as a complex number (hint: you need two placeholders)
    
    while (true) {
    Y.real = p.real + q.real;
    Y.imag = p.imag + q.imag;
    printf("y = %f, %f\n" ,Y.real,Y.imag);
    wait_us(1000000);
    }
}
