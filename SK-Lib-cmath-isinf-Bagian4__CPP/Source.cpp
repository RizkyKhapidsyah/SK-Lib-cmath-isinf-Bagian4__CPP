#include <iostream>
#include <cmath>
#include <cfloat>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    std::cout << std::boolalpha
        << "isinf(NaN) = " << std::isinf(NAN) << '\n'
        << "isinf(Inf) = " << std::isinf(INFINITY) << '\n'
        << "isinf(0.0) = " << std::isinf(0.0) << '\n'
        << "isinf(exp(800)) = " << std::isinf(std::exp(800)) << '\n'
        << "isinf(DBL_MIN/2.0) = " << std::isinf(DBL_MIN / 2.0) << '\n';

    _getch();
    return 0;
}