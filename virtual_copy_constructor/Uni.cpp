//
// Created by Mohamed Amine  Bellil on 14.07.23.
//

#include "Uni.h"

Uni::Uni(int capacity) : leute() {
    leute.reserve(capacity);
}

void Uni::add( person *p) {
    switch (p->getType()) {
        case P: leute.push_back(new person(*p)); break;
        case S: leute.push_back(new student(  *((student*)p)) ); break;
        case D: leute.push_back(new doc(*((doc*)p))); break;
    }
}

void Uni::print_all() const {
    for(int i=0 ; i < leute.size(); i++)
        std::cout << *leute[i];

}

person& Uni::operator[](int index) {
    return *leute.at(index);
}

Uni::Uni(const Uni &other) : leute(){
    leute.reserve(other.leute.size());
    for (int i = 0; i < leute.size(); ++i) {
        switch(other.leute[i]->getType()){
            case P : leute[i] = new person(*other.leute[i]);
            case S : leute[i] = new student( *((student*)other.leute[i]));
            case D : leute[i] = new doc( *((doc*)other.leute[i]));
        }

    }
}
