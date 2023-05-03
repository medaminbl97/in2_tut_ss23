//
// Created by Mohamed Amine  Bellil on 03.05.23.
//

#ifndef BEISPIELE_VEC3D_H
#define BEISPIELE_VEC3D_H

#include <iostream>

class vec3d {
    int x, y ,z;
public:
    vec3d(int x = 0, int y = 0, int z = 0);
    int getX() const;
    int getY() const;
    int getZ() const;

    void SetX(int x) ;
    void SetY(int y) ;
    void SetZ(int z) ;

    void print(std::ostream& out) const;

    vec3d operator + (const vec3d& other)const;
    vec3d operator ++ ();
    vec3d operator ++ (int);
    vec3d operator - (const vec3d& other)const;
    int operator * (const vec3d& other)const;



};

std::ostream& operator << (std::ostream& out, const vec3d& obj);

#endif //BEISPIELE_VEC3D_H
