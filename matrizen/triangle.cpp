//
// Created by Mohamed Amine  Bellil on 14.07.23.
//

#include "triangle.h"
#include "mat3x3.h"

triangle::triangle(const vec3 &v1, const vec3 &v2, const vec3 &v3) : p1(v1),p2(v2),p3(v3) {}

void triangle::rotate(float alpha, rotation axis) {
    switch (axis) {
        case XR : { XRMatrix m(alpha) ;  p1 = m*p1; p2 = m*p2 ; p3 = m*p3; break ; }
        case YR : { YRMatrix m(alpha) ;  p1 = m*p1; p2 = m*p2 ; p3 = m*p3; break;}
        case ZR : { ZRMatrix m(alpha) ;  p1 = m*p1; p2 = m*p2 ; p3 = m*p3; break;}
    }

}

void triangle::print(std::ostream &out) const {
    out << p1 << p2 << p3;
}

void triangle::scale(float s) {
    p1 = p1 * s;
    p2 = p2 * s;
    p3 =  p3 * s;

}


std::ostream & operator << (std::ostream& out , const triangle& obj){
    obj.print(out);
    return out;
}
