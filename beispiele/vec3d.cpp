//
// Created by Mohamed Amine  Bellil on 03.05.23.
//

#include "vec3d.h"

vec3d::vec3d(int x, int y, int z) : x(x) , y(y), z(z) {
}

int vec3d::getX() const {
    return x;
}

int vec3d::getY() const {
    return y;
}

int vec3d::getZ() const {
    return z;
}

void vec3d::SetX(int x) {
    this->x = x;
}

void vec3d::SetY(int y) {
    this->y = y;
}

void vec3d::SetZ(int z) {
    this->z = z;
}

void vec3d::print(std::ostream& out) const {
    out << "(" << x << "," << y << "," << z <<")" << std::endl;
}

vec3d vec3d::operator-(const vec3d &other) const {
    return vec3d(x - other.x , y - other.y , z - other.z);
}

int vec3d::operator*(const vec3d &other) const {
    return x * other.x + y * other.y + z * other.z;
}

vec3d vec3d::operator + (const vec3d &other) const {
    return vec3d(x + other.x , y + other.y , z + other.z);
}

vec3d vec3d::operator++() {
    x++;
    y++;
    z++;
    return *this;
}

vec3d vec3d::operator++(int) {
    return vec3d(x++,y++,z++);
}


std::ostream& operator << (std::ostream& out, const vec3d& obj){
    obj.print(out);
    return out;
}