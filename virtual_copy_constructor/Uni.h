//
// Created by Mohamed Amine  Bellil on 14.07.23.
//

#ifndef VIRTUAL_COPY_CONSTRUCTOR_UNI_H
#define VIRTUAL_COPY_CONSTRUCTOR_UNI_H

#include "person.h"
class Uni {
    std::vector<person*> leute;
public:
    Uni(int capacity);
    Uni(const Uni& other);
    void add(person *p);
    void print_all()const;
    person& operator[](int index);

};


#endif //VIRTUAL_COPY_CONSTRUCTOR_UNI_H
