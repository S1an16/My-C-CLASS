#include "complex.h"
#include <iostream>

Complex add(const Complex first, const Complex second){
    Complex result;
    result.real = first.real + second.real;
    result.complex = first.complex + second.complex;
    return result;
}
