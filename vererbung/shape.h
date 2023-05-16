//
// Created by Mohamed Amine  Bellil on 16.05.23.
//

#ifndef VERERBUNG_SHAPE_H
#define VERERBUNG_SHAPE_H

#include <iostream>

class shape {
protected:
    std::string name;
    float air;
public:
    shape(const std::string& name = "no_name");
    virtual void print()const;
    float getAir()const;
};

class circle : public shape {
    float radius;
public:
    circle(const std::string& name = "no_name",float radius = 0.0);
    float getRadius()const;
    void print()const ;
};

class triangle : public shape {
    float base;
    float height;
public:
    triangle(const std::string& name = "no_name",float base = 0.0 , float height = 0.0);
    float getBase()const;
    float getHeight()const;
    void print()const;
};



#endif //VERERBUNG_SHAPE_H
