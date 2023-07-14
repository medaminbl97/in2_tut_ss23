//
// Created by Mohamed Amine  Bellil on 14.07.23.
//

#ifndef MATRIZEN_MAT3X3_H
#define MATRIZEN_MAT3X3_H
#include <cmath>
#include "vec3.h"
class mat3x3 {
protected:
    vec3 v1;
    vec3 v2;
    vec3 v3;
public:
    mat3x3(const vec3& v1 ,const vec3& v2 ,const vec3& v3);
    void print(std::ostream& out)const;
    vec3 operator * (const vec3& obj);


};

class XRMatrix : public mat3x3 {
    float alpha;
public:
    XRMatrix(float alpha = 0);


};

class YRMatrix : public mat3x3 {
    float alpha;
public:
    YRMatrix(float alpha = 0);


};



class ZRMatrix : public mat3x3 {
    float alpha;
public:
    ZRMatrix(float alpha = 0);


};







std::ostream& operator << (std::ostream& out, const mat3x3& obj);





#endif //MATRIZEN_MAT3X3_H
