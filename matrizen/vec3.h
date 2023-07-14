//
// Created by Mohamed Amine  Bellil on 14.07.23.
//

#ifndef MATRIZEN_VEC3_H
#define MATRIZEN_VEC3_H
#include <iostream>

class vec3 {
public:
    float x,y,z;
    vec3(float x = 0, float y = 0, float z = 0);
    float operator * (const vec3& other);
    vec3 operator * (float s);
    void print(std::ostream& out)const;
};

std::ostream& operator << (std::ostream& out, const vec3& obj);


#endif //MATRIZEN_VEC3_H
