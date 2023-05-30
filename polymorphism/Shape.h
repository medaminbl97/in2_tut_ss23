//
// Created by Mohamed Amine  Bellil on 30.05.23.
//

#ifndef POLYMORPHISM_SHAPE_H
#define POLYMORPHISM_SHAPE_H
#include <iostream>
#include "cmath"
#include <string>

class Shape {
protected:
    std::string name;
    float air;
public:
    Shape(char * name = "no_name");
    const char * getName()const;
    float getAir()const;
    virtual void setAir() = 0; // rein virtuelle funktion
    virtual void print()const; // virtuelle funktion
};

class circle : public Shape{
    float radius;
public:
    circle(char * name = "no_name",float radius = 0);
    void setAir() ;
    void print()const;
};
class rec : public Shape{
    int h,w;
public:
    rec(char * name = "no_name",int h = 0, int  w = 0);
    void setAir();
    void print()const;
};

class tri : public Shape{
    int h,b;
public:
    tri(char * name = "no_name",int h = 0, int  b = 0);
    void setAir();
    void print()const;
};




#endif //POLYMORPHISM_SHAPE_H
