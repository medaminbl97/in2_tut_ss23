//
// Created by Mohamed Amine  Bellil on 06.06.23.
//

#ifndef UNTITLED_SHAPE_H
#define UNTITLED_SHAPE_H

#include <iostream>

enum type {S,C,T};

class shape {
public:
    std::string name;
    float air;
public:
    shape(char * name): name(name),air(0){}
    virtual type getClassType() const { return  S;}
};

class tri : public shape {
public:
    tri(char * name): shape(name) {}
    type getClassType() const { return  T;}
};


class circle : public shape{
public:
    circle(char * name): shape(name){}
    type getClassType() const { return  C;}
};


#endif //UNTITLED_SHAPE_H
