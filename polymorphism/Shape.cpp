//
// Created by Mohamed Amine  Bellil on 30.05.23.
//



#include "Shape.h"

Shape::Shape(char *name) : name(name),air(0){
}

const char *Shape::getName() const { // const char * --> const rückgabe , getName const --> funktion darf nicht attriute ändern
    return name.c_str();
}

float Shape::getAir() const {
    return air;
}

void Shape::print() const {
    std::cout << "Name : " << name << "\tAir : " << air << std::endl;
}


circle::circle(char *name, float radius) : Shape(name), radius(radius){
    setAir();
}

void circle::setAir() {
    air = M_PI * radius * radius;
}

void circle::print() const {
    std::cout << "Name : " << name << "\tAir : " << air << "\tRadius : "<< radius <<   std::endl;
}

rec::rec(char *name, int h, int w) : Shape(name), h(h),w(w) {
    setAir();
}

void rec::setAir() {
    air = h * w;
}


void rec::print() const {
    std::cout << "Name : " << name << "\tAir : " << air << "\tH : "<< h << "\tW : " << w  << std::endl;
}

tri::tri(char *name, int h, int b) : Shape(name), h(h),b(b) {
    setAir();
}

void tri::setAir() {
    air = h * b /2;
}

void tri::print() const {
    std::cout << "Name : " << name << "\tAir : " << air << "\tH : "<< h << "\tB : " << b  << std::endl;}
