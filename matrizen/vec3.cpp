//
// Created by Mohamed Amine  Bellil on 14.07.23.
//

#include "vec3.h"

vec3::vec3(float x, float y, float z) : x(x),y(y),z(z) {}

float vec3::operator*(const vec3 & other) {
    return x * other.x + y*other.y + z*other.z;
}

vec3 vec3::operator*(float s) {
    return vec3(x *s, y*s,z*s);
}

void vec3::print(std::ostream &out) const {
    out << "(" << x << "," << y << "," << z << ")" << std::endl;
}

std::ostream& operator << (std::ostream& out, const vec3& obj){
    obj.print(out);
    return out;
}

