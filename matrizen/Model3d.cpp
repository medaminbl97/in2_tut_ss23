//
// Created by Mohamed Amine  Bellil on 14.07.23.
//

#include "Model3d.h"

void Model3d::rotate(float alpha, rotation axis) {
    for(int i = 0; i < tris.size() ; i++)
        tris[i].rotate(alpha,axis);

}

void Model3d::scale(float s) {
    for(int i = 0; i < tris.size() ; i++)
        tris[i].scale(s);
}
