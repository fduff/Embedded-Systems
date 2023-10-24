#include "mbed.h"
#include "ComplexNumber.hpp"

// main() runs in its own thread in the OS
int main()
{
    ComplexNumber c1(2.0,3.0);
    ComplexNumber c2(2.0,-4.0);
   
    ComplexNumber c1_copy1 = c1;
    ComplexNumber c2_copy1 = c2;
    ComplexNumber c2_copy2 = c2;
    ComplexNumber c1_copy2 = c1;
    
    c1_copy1.add(c2);   //c1 = c1 + c2
    c2.negated();
    ComplexNumber c4 = c2_copy1.subtractedfrom(c1);

    ComplexNumber c5 = c1_copy2.multiplywith(c2_copy2);

    //c2.negated();
    
    c1.display();
    c1_copy1.display();
    c5.display();
    c2_copy1.display();
    c2.display();   
    c4.display();


    ComplexNumber c3 = c1.addedTo(c2);
    c3.conjugate();
    c3.display();

    //Create new scope
    {
        ComplexNumber test(1.0);
        test.display();
    }
    //test is now out of scope and should be destroyed

    while (true);
}

