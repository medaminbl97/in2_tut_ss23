//
// Created by Mohamed Amine  Bellil on 14.07.23.
//

#ifndef MATRIZEN_MODEL3D_H
#define MATRIZEN_MODEL3D_H

#include "triangle.h"
class Model3d {
    std::vector<triangle> tris;
public:
    Model3d(const char * filename);
    void rotate(float alpha, rotation axis);
    void scale(float s);
};


#endif //MATRIZEN_MODEL3D_H
