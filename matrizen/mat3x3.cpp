//
// Created by Mohamed Amine  Bellil on 14.07.23.
//

#include "mat3x3.h"

mat3x3::mat3x3(const vec3 &v1, const vec3 &v2, const vec3 &v3) : v1(v1),v2(v2),v3(v3) {

}

void mat3x3::print(std::ostream &out) const {
    out << "|" << v1.x << " " << v1.y << " " << v1.z << "|" << std::endl;
    out << "|" << v2.x << " " << v2.y << " " << v2.z << "|" << std::endl;
    out << "|" << v3.x << " " << v3.y << " " << v3.z << "|" << std::endl;
}

vec3 mat3x3::operator*(const vec3 &obj) {
    return vec3(v1*obj, v2*obj,v3*obj);
}


std::ostream& operator << (std::ostream& out, const mat3x3& obj){
    obj.print(out);
    return out;
}

XRMatrix::XRMatrix(float alpha) : mat3x3(vec3(),vec3(),vec3()), alpha(alpha){

    v1.x = 1;
    v2.y = cos(alpha);
    v2.z = -sin(alpha);
    v3.y = sin(alpha);
    v3.z = cos(alpha);

}
YRMatrix::YRMatrix(float alpha) : mat3x3(vec3(),vec3(),vec3()), alpha(alpha){

    v2.y = 1;
    v1.x = cos(alpha);
    v3.x = -sin(alpha);
    v1.z = sin(alpha);
    v3.z = cos(alpha);

}

ZRMatrix::ZRMatrix(float alpha) : mat3x3(vec3(),vec3(),vec3()), alpha(alpha){

    v3.z = 1;
    v1.x = cos(alpha);
    v1.y = -sin(alpha);
    v2.x = sin(alpha);
    v2.y = cos(alpha);

}

