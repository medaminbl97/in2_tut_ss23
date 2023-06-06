//
// Created by Mohamed Amine  Bellil on 06.06.23.
//

#ifndef UNTITLED_SHAPE_CONTAINER_H
#define UNTITLED_SHAPE_CONTAINER_H
#include <vector>
#include <iostream>
#include "shape.h"
class shape_container {
public:
    std::vector<shape*> shapes;
public:
    shape_container():shapes(){}
    int getSize() const { return shapes.size(); }
    void push(shape* s){

        switch (s->getClassType()) {
            case T: shapes.push_back( new tri(  *((tri*)s)  ));break;
            case S: shapes.push_back( new shape(*s) );break;
            case C: shapes.push_back( new circle(  *((circle*)s)  ));break;
        }
    }

    shape & operator [] (int index){
        return  *shapes.at(index);
    }
    void print(){
        for(auto& v : shapes)
            std::cout << v->name << std::endl;
    }
};


#endif //UNTITLED_SHAPE_CONTAINER_H
