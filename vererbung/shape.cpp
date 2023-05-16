//
// Created by Mohamed Amine  Bellil on 16.05.23.
//

#include "shape.h"

shape::shape(const std::string &name) :name(name),air(0.0){

}

void shape::print() const {
    std::cout << "Print() von shape classe aufgerufen !!" << std::endl;
    std::cout << "Name : " << name << "\tAir : " << air << std::endl;
}

float shape::getAir() const {
    return air;
}


circle::circle(const std::string& name,float radius) : shape(name), radius(radius) {
    air = 3.14 * radius * radius ;
}

float circle::getRadius() const {
    return radius;
}

void circle::print() const {
    std::cout << "Name : " << name << "\tAir : " << air << "\tRadius : " << radius << std::endl;
}

triangle::triangle(const std::string &name, float base, float height) : shape(name), base(base), height(height) {
    air = base * height /2 ;
}

float triangle::getBase() const {
    return base;
}

float triangle::getHeight() const {
    return height;
}

void triangle::print() const {
    std::cout << "Name : " << name << "\tAir : " << air << "\tHeight : " << height << "\tBase : " << base << std::endl;
}

