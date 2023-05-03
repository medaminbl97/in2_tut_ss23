//
// Created by Mohamed Amine  Bellil on 03.05.23.
//

#ifndef BEISPIELE_ARRAY_H
#define BEISPIELE_ARRAY_H

#include "vec3d.h"
#include <iostream>

class array {
    vec3d * vs[10];
    int size;
public:
    array();
    int getSize()const;
    void push(const vec3d& v);
    void print(std::ostream& out)const;

    friend std::ostream & operator << (std::ostream& out, const array& obj);
    void operator << (const vec3d& v);
    void operator << (int val);

};


#endif //BEISPIELE_ARRAY_H
