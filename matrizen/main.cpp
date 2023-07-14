#include <iostream>
#include "vec3.h"
#include "mat3x3.h"

int main() {

    XRMatrix m(M_PI_2);
    vec3 v1(0,0,2);
    vec3 v2 = m * v1;
    std::cout << v1;
    std::cout << m;

    std::cout << v2;


    return 0;
}
