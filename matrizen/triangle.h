//
// Created by Mohamed Amine  Bellil on 14.07.23.
//

#ifndef MATRIZEN_TRIANGLE_H
#define MATRIZEN_TRIANGLE_H

enum rotation {XR,YR,ZR};

#include "vec3.h"
class triangle {
    vec3 p1;
    vec3 p2;
    vec3 p3;
public:
    triangle(const vec3& v1 ,const vec3& v2 ,const vec3& v3);
    void rotate(float alpha,rotation axis);
    void print(std::ostream & out)const;
    void scale(float s);
};

std::ostream & operator << (std::ostream& out , const triangle& obj);




#endif //MATRIZEN_TRIANGLE_H
