//
// Created by Mohamed Amine  Bellil on 03.05.23.
//

#include "array.h"

array::array() : size(0){
    for (int i = 0; i < 10; ++i) {
        vs[i] = nullptr;
    }
}

int array::getSize() const {
    return size;
}

void array::push(const vec3d &v) {
    if(size < 10){
        vs[size] = new vec3d(v);
        size++;
    }else std::cout << "Cannot push ,Array is full" << std::endl;
}

void array::print(std::ostream &out) const {
        for (int i = 0; i < 10; ++i) {
            if(vs[i]) std::cout << *vs[i]; else std::cout << "Nullptr" << std::endl;
        }
}


std::ostream & operator << (std::ostream& out, const array& obj){
    obj.print(out);
    return out;
}

void array::operator<<(const vec3d &v) {
    push(v);
}

void array::operator<<(int val) {
    push(vec3d(val,val,val));
}
