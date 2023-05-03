#include <iostream>
#include "vec3d.h"

#include "array.h"





int main() {
    vec3d v1(3,4,5);
    vec3d v2(31,41,51);
    vec3d v3 = v1 + v2;
    //std::cout << v1 * v2;

    //std::cout << v1++;
    //std::cout << v1;
    //std::cout << v1++;
    /*vec3d v(100,100,100); // auf stack

    vec3d * v_ptr = &v; // pointer auf dem stack
    std::cout << *v_ptr << std::endl;

    vec3d * ptr = new vec3d(); // ptr auf dem stack aber *ptr --> in heap;
    std::cout << *ptr;

    vec3d *vs[3]; // vs auf auf dem stack mit 3 werte (vec3d) in heap
    vs[0] = new vec3d();
    vs[1] = new vec3d();
    vs[2] = new vec3d();

    std::cout << *vs[0];
    std::cout << *vs[1] ;
    std::cout << *vs[2] ; */

    array a;
    a.push(vec3d());
    a << vec3d(4,6,7);
    a << 100;
    std::cout << a;




    return 0;
}
